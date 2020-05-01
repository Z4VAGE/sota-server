import QtQuick 2.0
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.12

Item {
    id: root

    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color trim1Color: "#5ac18e"
    property color trim2Color: "#5ac1c1"
    property color textColor: "white"
    property string pageUrl: "qrc:/dashPage.qml"
    property var activeBtn: dashButton

    Rectangle {
        id: navbar
        color: root.primaryColor
        anchors.fill: parent

        ColumnLayout {
            id: navLayout
            anchors.fill: parent
            spacing: 0

            Rectangle {
                id: label
                Layout.preferredHeight: 60
                Layout.fillWidth: true
                color: "transparent"

                Text {
                    anchors.centerIn: parent
                    text: "Secure.OTA"
                    font.family: "Uroob"
                    font.bold: true
                    horizontalAlignment: Text.AlignHCenter
                    width: root.width
                    font.pointSize: 40
                    color: root.trim1Color
                }
            }

            NavButton {
                id: dashButton
                txt: "Dashboard"
                Layout.fillWidth: root.width
                Layout.preferredHeight: 40
                active: (activeBtn === dashButton) ? 1 : 0
                onSelected: handleChange("qrc:/dashPage.qml", dashButton)
            }
            NavButton {
                id: clientsButton
                txt: "Clients"
                Layout.fillWidth: root.width
                Layout.preferredHeight: 40
                active: (activeBtn === clientsButton) ? 1 : 0
                onSelected: handleChange("qrc:/clientsPage.qml", clientsButton)
            }
            NavButton {
                id: softwareButton
                txt: "Software"
                Layout.fillWidth: root.width
                Layout.preferredHeight: 40
                active: (activeBtn === softwareButton) ? 1 : 0
                onSelected: handleChange("qrc:/softwarePage.qml", softwareButton)
            }
            NavButton {
                id: settingsButton
                txt: "Settings"
                Layout.fillWidth: root.width
                Layout.preferredHeight: 40
                active: (activeBtn === settingsButton) ? 1 : 0
                onSelected: handleChange("qrc:/settingsPage.qml", settingsButton)
            }
            Rectangle { // extra space
                id: bottomspace
                Layout.preferredWidth: root.width
                Layout.preferredHeight: 200
                color: "transparent"
            }

        } // end columnLayout

    } // end navbar

    function handleChange(newpage, button){ // clicked a button

        if(root.pageUrl !== newpage){
            root.activeBtn.active = 0
            root.activeBtn = button
            root.pageUrl = newpage
        }

    } // end handleChange

} // end root
