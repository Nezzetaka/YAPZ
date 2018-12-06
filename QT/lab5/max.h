#ifndef MAX_H
#define MAX_H

#include <QObject>

class Max : public QObject
{
    Q_OBJECT
    public:
        explicit Max(QObject *parent = 0);

    public slots:
        int max(int a, int b);
};

#endif // MAX_H
