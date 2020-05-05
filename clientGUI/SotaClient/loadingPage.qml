import QtQuick 2.0
import QtQuick.Controls 2.14

Item {
    id: root

    property color primaryColor: "#1e2124"

    Rectangle {
        anchors.fill: parent
        color: primaryColor

        BusyIndicator { // Stack destroys this once it is popped
            anchors.centerIn: parent
            running: true
        }

    }

}

