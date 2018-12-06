#include <QtTest>
#include <QtGui>
#include <QLineEdit>
#include <QCheckBox>
#include "test_qlineedit.h"

void Test_QLineEdit::edit()
{
    QCheckBox a;
    a.show();
    QTest::mouseClick(&a, Qt::LeftButton);

    QVERIFY(a.isChecked());
    QTest::mouseClick(&a, Qt::LeftButton);

    QVERIFY(a.isChecked());
}
