#ifndef {{cookiecutter.plugin_name|upper}}_H
#define {{cookiecutter.plugin_name|upper}}_H

#include <QObject>

class {{cookiecutter.plugin_name}}: public QObject {
    Q_OBJECT

public:
    {{cookiecutter.plugin_name}}();
    ~{{cookiecutter.plugin_name}}() = default;

    Q_INVOKABLE void speak();
};

#endif
