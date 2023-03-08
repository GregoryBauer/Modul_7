#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;
#define MAX(a,b) ((a)>(b)) ? (a) : (b)


enum TransportType {Track, Ship};

class Transport
{

public:
    Transport() {}
    virtual ~Transport(){ qDebug() << "Transport destroyed"; }
    virtual void deliver() = 0;
    virtual double speed() = 0;
    void static createTransport(TransportType* trType) {}
};

class Ship : public Transport
{
public:
    Ship() {}
    ~Ship() override;
    void deliver() override;
};

Ship ::~Ship()
{
    qDebug() << "Ship destroyed";
}

void Ship :: deliver()
{
    qDebug() << "Using Ship";
}


class Track : public Transport
{
public:
    Track() {}
    ~Track() override;
    void deliver() override;
};

Track ::~Track()
{
    qDebug() << "Track destroyed";
}

void Track :: deliver()
{
    qDebug() << "Using Track";
}


class Plain : public Transport
{
public:
    Plain();
    ~Plain() override;
    void deliver() override;
    double speed() override;
};

Plain :: Plain()
{

}
Plain :: ~Plain()
{
    qDebug() << "Plain estroyed";
}

void Plain :: deliver()
{
    qDebug() << "We use plain";
}

double Plain :: speed()
{
    return 905.4;
}

int main()
{
    //QCoreApplication a(argc, argv);

//    Transport *unit;
//    unit = new class Plain();
//    unit->deliver();
//    qDebug() << unit->speed();
//    delete unit;

    int x = 1;
    int y = 2;
    int z = MAX(x,y);
    qDebug() << z;

    //return a.exec();
    return 0;
}
