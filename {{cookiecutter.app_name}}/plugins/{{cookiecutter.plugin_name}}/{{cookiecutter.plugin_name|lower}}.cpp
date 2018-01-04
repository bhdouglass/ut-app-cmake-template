#include <QDebug>

#include "{{cookiecutter.plugin_name|lower}}.h"

{{cookiecutter.plugin_name}}::{{cookiecutter.plugin_name}}() {

}

void {{cookiecutter.plugin_name}}::speak() {
    qDebug() << "hello world!";
}
