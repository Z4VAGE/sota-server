#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include "sotaserver.h"
#include "sotadb.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    // 'server' is a new object pointing to SotaServer
    // 'db' is a new object pointing to database
    // When app closes, pointers are cleaned up.
    QScopedPointer<SOTAserver> server(new SOTAserver);
    QScopedPointer<SOTAdb> db(new SOTAdb);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    //Define and set server property in engine
    engine.rootContext()->setContextProperty("server", server.data());

    //Define and set db property in engine
    engine.rootContext()->setContextProperty("db", db.data());


    return app.exec();
}
