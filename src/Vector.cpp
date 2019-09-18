#include "Vector.h"

Vector::Vector(var p , var q)
{
    //ctor
    ///double Startx;
    ///double Starty;
    ///double Endx;
    ///double Endy;

    start = p;
    end = q;

}

//Vector::~Vector()
//{
    //dtor
//}
void Vector::print()
{
    start.print();
    cout << " -->";
    end.print();

    ///cout << "( "<< x << ", " << y << " )";
}

double Vector::modulo()
{
    return sqrt((end.x-start.x)*(end.x-start.x)+(end.y-start.y)*(end.y-start.y));
}
