import QtQuick 2.0
import QtQuick.Layouts 1.12

Item {
    id: root

    property string txt
    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color color3: "#282b30"
    property color color4: "#7a7d82"
    property color trim1Color: "#5ac18e"
    property color trim2Color: "#5ac1c1"
    property color textColor: "white"
    property int fontsize: 20
    property int btnRadius: 0

    signal clicked()

    Rectangle {
        id: body
        width: parent.width
        height: parent.height
        radius: btnRadius
        anchors.fill: parent
        color: root.secondaryColor

        property color lastcolor: "#282b30"

        Text {
            id: btnText
            text: root.txt
            style: Text.Normal
            font.pointSize: fontsize
            color: root.textColor
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }

        MouseArea {
            id: area
            anchors.fill: parent
            hoverEnabled: true
            onPressed: {
                flashon.start()
            }
            onReleased: {
                flashoff.start()
                root.clicked()
            }
            onEntered: {
                body.color = color4
            }
            onExited: {
                body.color = secondaryColor
            }
        } // end MouseArea

       PropertyAnimation {id: flashon; target: body; properties: "color"; to: trim1Color; duration: 50}
       PropertyAnimation {id: flashoff; target: body; properties: "color"; to: secondaryColor; duration: 50}

    } // end body

} // end root
