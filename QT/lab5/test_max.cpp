#include <QTest>
#include "test_max.h"
#include "max.h"

Test_Max::Test_Max(QObject *parent) : QObject(parent)
{

}

void Test_Max::max_data()
{
    QTest::addColumn<int>("arg1");
    QTest::addColumn<int>("arg2");
    QTest::addColumn<int>("result");
    QTest::newRow("max_test1") << 25 << 0 << 25;
    QTest::newRow("max_test2") << -12 << -5 << -5;
    QTest::newRow("max_test3") << 2007 << 2007 << 2007;
}
void Test_Max::max()
{
    Max max;
    QFETCH(int, arg1);
    QFETCH(int, arg2);
    QFETCH(int, result);

    QCOMPARE(max.max(arg1, arg2), result);
}
