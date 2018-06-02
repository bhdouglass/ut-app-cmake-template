#ifndef {{cookiecutter.plugin_name|upper}}_H
#define {{cookiecutter.plugin_name|upper}}_H

#include <QObject>

class {{cookiecutter.plugin_name.capitalize()}}: public QObject {
    Q_OBJECT

public:
    {{cookiecutter.plugin_name.capitalize()}}();
    ~{{cookiecutter.plugin_name.capitalize()}}() = default;

    Q_INVOKABLE void speak();
};

#endif
