#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include "sotaserver.h"
#include "sotadb.h"
#include "client.h"
#include "software.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    // 'server' is a new object pointing to sotaserver
    // 'db' is a new object pointing to database
    // When app closes, pointers are cleaned up.
    QScopedPointer<SOTAserver> server(new SOTAserver);
    QScopedPointer<SOTAdb> db(new SOTAdb);

    //lists for client & software model
    QList<Client*> clientListModel;
    QList<Software*> softwareListModel;

    QQmlApplicationEngine engine;

    //Define and set custom classes as properties of engine
    //Allows communication between QML and C++
    engine.rootContext()->setContextProperty(QStringLiteral("server"), server.data());
    engine.rootContext()->setContextProperty(QStringLiteral("db"), db.data());
    engine.rootContext()->setContextProperty("clientList", QVariant::fromValue(clientListModel));
    engine.rootContext()->setContextProperty("softwareList", QVariant::fromValue(softwareListModel));

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
