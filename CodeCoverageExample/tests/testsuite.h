#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <QObject>
#include <QVector>
#include <QtTest/QtTest>

class TestSuite : public QObject
{
    Q_OBJECT

public:
    explicit TestSuite();

    static QVector<QObject*> suites_;
};

#endif // TESTSUITE_H
