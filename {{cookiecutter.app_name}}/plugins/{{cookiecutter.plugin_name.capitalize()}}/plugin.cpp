#include <QtQml>
#include <QtQml/QQmlContext>

#include "plugin.h"
#include "{{cookiecutter.plugin_name|lower}}.h"

void {{cookiecutter.plugin_name.capitalize()}}Plugin::registerTypes(const char *uri) {
    //@uri {{cookiecutter.plugin_name.capitalize()}}
    qmlRegisterSingletonType<{{cookiecutter.plugin_name.capitalize()}}>(uri, 1, 0, "{{cookiecutter.plugin_name.capitalize()}}", [](QQmlEngine*, QJSEngine*) -> QObject* { return new {{cookiecutter.plugin_name.capitalize()}}; });
}
