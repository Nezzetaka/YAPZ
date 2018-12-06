#ifndef TEST_MAX_H
#define TEST_MAX_H

#include <QObject>

class Test_Max : public QObject
{
    Q_OBJECT
    public:
        explicit Test_Max(QObject *parent = 0);

    private slots:
        void max();
        void max_data();

};

#endif // TEST_MAX_H
