#ifndef {{cookiecutter.plugin_name|upper}}PLUGIN_H
#define {{cookiecutter.plugin_name|upper}}PLUGIN_H

#include <QQmlExtensionPlugin>

class {{cookiecutter.plugin_name}}Plugin : public QQmlExtensionPlugin {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif
