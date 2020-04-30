import QtQuick 2.0
import QtQuick.Controls 2.14

Item {
    id: root

    function changePage(page){
        pageView.replace(page)
    }

    StackView {
        id: pageView
        anchors.fill: parent
        initialItem: Qt.resolvedUrl("qrc:/dashPage.qml")

        replaceEnter: Transition {
            PropertyAnimation {
                property: "opacity"
                from: 0
                to:1
                duration: 200
            }
        }
        replaceExit: Transition {
            PropertyAnimation {
                property: "opacity"
                from: 1
                to:0
                duration: 200
            }
        }



    } // end pageView

}
