#include <QApplication>
#include <QTest>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "test_max.h"
#include "test_qlineedit.h"

using namespace std;

int main(int argc, char *argv[])
{
    freopen("testing.log", "w", stdout);
    QApplication a(argc, argv);
    QTest::qExec(new Test_Max, argc, argv);
    cout << endl;
    QTest::qExec(new Test_QLineEdit, argc, argv);
    return 0;
}
