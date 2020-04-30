import QtQuick 2.0
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.12

Item {
    id: root

    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color accentColor: "#5ac18e"
    property color accent2color: "#5ac1c1"
    property color txtColor: "white"
    property var activeBtn: dashButton
    property string pageUrl: "qrc:/dashPage.qml"

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
                width: root.width
                height: 60
            }
            NavButton {
                id: dashButton
                txt: "Dashboard"
                implicitHeight: 40
                implicitWidth: root.width
                active: (activeBtn === dashButton) ? 1 : 0
                onSelected: handleChange("qrc:/dashPage.qml", dashButton)
            }
            NavButton {
                id: clientsButton
                txt: "Clients"
                implicitHeight: 40
                implicitWidth: root.width
                active: (activeBtn === clientsButton) ? 1 : 0
                onSelected: handleChange("qrc:/clientsPage.qml", clientsButton)
            }
            NavButton {
                id: softwareButton
                txt: "Software"
                implicitHeight: 40
                implicitWidth: root.width
                active: (activeBtn === softwareButton) ? 1 : 0
                onSelected: handleChange("qrc:/softwarePage.qml", softwareButton)
            }
            NavButton {
                id: settingsButton
                txt: "Settings"
                implicitHeight: 40
                implicitWidth: root.width
                active: (activeBtn === settingsButton) ? 1 : 0
                onSelected: handleChange("qrc:/settingsPage.qml", settingsButton)
            }
            Rectangle { // extra space
                id: bottomspace
                width: root.width
                height: 200
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
