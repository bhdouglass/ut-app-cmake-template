#include <QtQml>
#include <QtQml/QQmlContext>

#include "plugin.h"
#include "{{cookiecutter.plugin_name|lower}}.h"

void {{cookiecutter.plugin_name}}Plugin::registerTypes(const char *uri) {
    //@uri {{cookiecutter.plugin_name}}
    qmlRegisterSingletonType<{{cookiecutter.plugin_name}}>(uri, 1, 0, "{{cookiecutter.plugin_name}}", [](QQmlEngine*, QJSEngine*) -> QObject* { return new {{cookiecutter.plugin_name}}; });
}
