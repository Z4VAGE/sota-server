import QtQuick 2.0
import QtQuick.Controls 2.5

Item {

    Rectangle {
        anchors.fill: parent
        color: "grey"


        ScrollView {
            id: scrollView
            anchors.fill: parent
            ScrollBar.vertical.policy: ScrollBar.AlwaysOn

            Rectangle {
                id: statusbar
                color: "black"
                height: 50
                width: parent.width

                Text {
                    text: "Hello World!"
                    font.pointSize: 20
                    color: "white"
                }
            }

            ListView {

                anchors.fill: parent


            } // End ListView


        } // End ScrollView





    } // End Rectangle



} // End Item
