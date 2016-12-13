#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QObject>

class Template: public QObject {
    Q_OBJECT

public:
    Template();
    ~Template() = default;

    Q_INVOKABLE void test();
};

#endif
