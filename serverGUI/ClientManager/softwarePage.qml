import QtQuick 2.0
import QtQuick.Controls 2.5

Item {
    id: root


    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color trim1Color: "#5ac18e"
    property color trim2Color: "#5ac1c1"
    property color textColor: "white"

    Rectangle {
        id: background
        anchors.fill: parent
        color: primaryColor

        Column {
            id: col
            anchors.fill: parent

            Rectangle {
                id: header
                width: parent.width
                height: 40
                color: "transparent"
            }

            Rectangle {
                id: infobox
                color: primaryColor
                height: parent.height * 0.4
                width: parent.width * 0.9
                border.width: 2
                border.color: secondaryColor
                radius: 10
                anchors.horizontalCenter: parent.horizontalCenter

                Text {
                    id: label
                    text: "Add New Software"
                    font.pointSize: 18
                    color: textColor
                    x: 15
                    y: 15
                }
            } // end infobox

        } // end Column

    } // End Rectangle

} // End Item
