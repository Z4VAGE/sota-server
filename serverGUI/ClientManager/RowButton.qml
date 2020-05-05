import QtQuick 2.0
import QtQuick.Layouts 1.12

Item {
    id: root

    property string txt1: "null"
    property string txt2: "null"
    property string txt3: "null"
    property string txt4: "null"
    property string txt5: "null"
    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color color3: "#282b30"
    property color color4: "#7a7d82"
    property color trim1Color: "#5ac18e"
    property color trim2Color: "#5ac1c1"
    property color textColor: "white"
    property int fontsize: 15
    property int btnRadius: 0
    property bool isEnabled: true
    property int firstMargin: 0

    signal clicked()

    Rectangle {
        id: body
        width: parent.width
        height: parent.height
        radius: btnRadius
        anchors.fill: parent
        color: root.secondaryColor

        RowLayout {
            id: rowlayout
            anchors.fill: parent

            Text {
                id: t1
                text: (txt1 == "") ? "null" : txt1
                font.pointSize: fontsize
                color: textColor
                Layout.column: 1
                Layout.fillHeight: true
                Layout.preferredWidth: parent.width / 5
                Layout.rightMargin: firstMargin
            }
            Text {
                id: t2
                text: (txt2 == "") ? "null" : txt2
                font.pointSize: fontsize
                color: textColor
                Layout.column: 1
                Layout.fillHeight: true
                Layout.preferredWidth: parent.width / 5
            }
            Text {
                id: t3
                text: (txt3 == "") ? "null" : txt3
                font.pointSize: fontsize
                color: textColor
                Layout.column: 1
                Layout.fillHeight: true
                Layout.preferredWidth: parent.width / 5
            }
            Text {
                id: t4
                text: (txt4 == "") ? "null" : txt4
                font.pointSize: fontsize
                color: textColor
                Layout.column: 1
                Layout.fillHeight: true
                Layout.preferredWidth: parent.width / 5
            }
            Text {
                id: t5
                text: (txt5 == "") ? "null" : txt5
                font.pointSize: fontsize
                color: textColor
                Layout.column: 5
                Layout.fillHeight: true
                Layout.preferredWidth: parent.width / 5
            }

        }

        MouseArea {
            id: area
            enabled: isEnabled
            anchors.fill: parent
            hoverEnabled: isEnabled
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
