#include "max.h"

Max::Max(QObject *parent) : QObject(parent)
{

}

int Max::max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}
