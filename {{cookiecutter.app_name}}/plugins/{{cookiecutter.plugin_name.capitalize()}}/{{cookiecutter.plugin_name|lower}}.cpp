#include <QDebug>

#include "{{cookiecutter.plugin_name|lower}}.h"

{{cookiecutter.plugin_name.capitalize()}}::{{cookiecutter.plugin_name.capitalize()}}() {

}

void {{cookiecutter.plugin_name.capitalize()}}::speak() {
    qDebug() << "hello world!";
}
