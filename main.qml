import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Open EXE File"

    Column {
        anchors.centerIn: parent

        Button {
            text: "Open EXE File"
            onClicked: {
                backend.selectAndOpenExe()
            }
        }
    }
}
