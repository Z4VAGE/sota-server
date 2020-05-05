import QtQuick 2.0
import QtQuick.Layouts 1.12

Item {
    id: root

    property string txt
    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color trim1Color: "#5ac18e"
    property color trim2Color: "#5ac1c1"
    property color textColor: "white"
    property int radius: 0
    property int active: 0

    signal selected()

    Rectangle {
        id: body
        width: parent.width
        height: parent.height
        radius: radius
        anchors.fill: parent
        color: root.active ? root.trim1Color : root.primaryColor

        property color lastcolor: "#282b30"

        Text {
            id: btnText
            text: root.txt
            style: Text.Normal
            font.pointSize: 20
            color: root.textColor
            anchors.fill: parent
            anchors.leftMargin: 15
            verticalAlignment: Text.AlignVCenter
        }

        MouseArea {
            id: area
            anchors.fill: parent
            hoverEnabled: true
            onClicked: {
                root.active = 1
                body.color = root.trim1Color
                root.selected()
            }
            onEntered: {
                body.color = root.active ? root.trim2Color : root.secondaryColor
            }
            onExited: {
                body.color = root.active ? root.trim1Color : root.primaryColor
            }
        } // end MouseArea

    } // end body

    onActiveChanged: body.color = (root.active === 1) ? root.trim1Color : root.primaryColor

    function reset() {
        body.color = root.primaryColor
        root.active = 0
    }

} // end root

