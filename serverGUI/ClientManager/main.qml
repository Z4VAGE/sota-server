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

    RowLayout { // Window split into Navbar and Pageview
        id: mainLayout
        anchors.fill: parent
        width: parent.width
        height: parent.height
        spacing: 0

        Navbar { // Made to control page navigation
            id: navbar
            width: parent.width * 0.2
            height: parent.height
            anchors.left: parent.left
            onPageUrlChanged: pageView.changePage(navbar.pageUrl)
        } // end Navbar

        PageView { // Allows for easy page navigation
            id: pageView
            width: parent.width * 0.8
            height: parent.height
            anchors.left: navbar.right
        } // end PageView


    }//end RowLayout

//    Component.onCompleted: {
//        pageView.replace("qrc:/dashPage.qml")
//    }

}//end ApplicationWindow
