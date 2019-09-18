#include<iostream>
#include "var.h"
using namespace std;
var::var()
{
    //ctor
    double x=0;
    double y=0;
}

///var::~var()

///var::var(double nx, double ny){}
void var::print()
{
    //dtor
    cout << "( "<< x << ", " << y << " )";

}
