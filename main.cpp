#include <iostream>
#include "var.h"
#include "Vector.h"

using namespace std;


int main()
{
    /*
    var p;
    ///var q(3,4);
    p.print();
    cout << endl;
    ///q.print();
    Vector vec1;
    vec1.print()
    vec1.start.x=3.0;
    vec1.start.y=4.0;    */
    var a;
    var b(3,4);
    Vector v(a,b);
    v.print();
    cout << endl;
    cout << v.modulo() << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               q.print();
    return 0;
}
