#include <QCoreApplication>

#include "tests/testsuite.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int failedSuitesCount = 0;

    QVector<QObject*>::iterator iter;

    for ( iter = TestSuite::suites_.begin(); iter != TestSuite::suites_.end(); ++iter )
    {
        int result = QTest::qExec( *iter );

        if ( result != 0 )
        {
            failedSuitesCount++;
        }
    }

    return failedSuitesCount;
}
