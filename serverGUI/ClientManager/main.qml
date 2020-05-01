import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.12

ApplicationWindow {
    id: mainwindow
    visible: true
    title: qsTr("Secure OTA Client Manager")
    width: 1280
    height: 720
    color: trim1Color

    property color primaryColor: "#1e2124"
    property color secondaryColor: "#42464d"
    property color trim1Color: "#5ac18e"
    property color trim2Color: "#5ac1c1"
    property color textColor: "#ffffff"


    RowLayout { // Window split into Navbar (Left) and Pageview (Right)
        id: mainLayout
        anchors.fill: parent
        width: parent.width
        height: parent.height
        spacing: 0

        Navbar { // Use buttons on the sidebar to control page navigation
            id: navbar
            Layout.fillHeight: true
            Layout.preferredWidth: (parent.width * 0.2) - 2
            onPageUrlChanged: pageView.changePage(navbar.pageUrl)
        } // end Navbar

        Rectangle {
            id: separator
            color: trim1Color
            Layout.fillHeight: true
            Layout.preferredWidth: 4
        } // end Separator

        PageView { // StackView for page viewing with fade transition
            id: pageView
            Layout.fillHeight: true
            Layout.preferredWidth: (parent.width * 0.8) - 2
        } // end PageView


    }//end RowLayout

    Component.onCompleted: { // Open Dashboard after application is loaded
        pageView.changePage("qrc:/dashPage.qml")
    }

}//end ApplicationWindow
