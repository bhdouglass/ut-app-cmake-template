import QtQuick 2.4
import QtQuick.Layouts 1.1
import Ubuntu.Components 1.3
import Template 1.0

MainView {
    id: root
    objectName: 'mainView'
    applicationName: 'template.bhdouglass'
    automaticOrientation: true

    width: units.gu(45)
    height: units.gu(75)

    Label {
        text: 'Hello World!'
    }

    Component.onCompleted: Template.test()
}
