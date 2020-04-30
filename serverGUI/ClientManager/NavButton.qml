import QtQuick 2.0
import QtQuick.Layouts 1.12

Item {
    id: root

    property string txt
    property color txtColor: "white"
    property color normalColor: "#1e2124"
    property color hoverColor: "#42464d"
    property color pressedColor: "#5ac18e"
    property color pressedHoverColor: "#5ac1c1"
    property int radius: 0
    property int active: 0

    signal selected()

    Rectangle {
        id: body
        width: parent.width
        height: parent.height
        radius: radius
        anchors.fill: parent
        color: root.active ? root.pressedColor : root.normalColor

        property color lastcolor: "#282b30"

        Text {
            id: btnText
            text: root.txt
            font.pointSize: 20
            color: root.txtColor
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
                body.color = root.pressedColor
                root.selected()
            }
            onEntered: {
                body.color = root.active ? root.pressedHoverColor : root.hoverColor
            }
            onExited: {
                body.color = root.active ? root.pressedColor : root.normalColor
            }
        } // end MouseArea

    } // end body

    onActiveChanged: body.color = (root.active === 1) ? root.pressedColor : root.normalColor

    function reset() {
        body.color = root.normalColor
        root.active = 0
    }

} // end root
