import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
            id: rect
            width: 100
            height:100
//            color: Qt.binding(function() { return this.width * 2 })
            color:"Yellow"
        }

    TextEdit { id: myTextField;text: mystr.text}
    Binding { target: mystr; property: "text"; value: myTextField.text }
}
