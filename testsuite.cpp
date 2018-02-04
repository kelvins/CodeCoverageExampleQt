#include "testsuite.h"

QVector<QObject*> TestSuite::suites_;

TestSuite::TestSuite()
{
   suites_.append(this);
}
