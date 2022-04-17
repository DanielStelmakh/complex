#include <iostream>
#include "ComplexClass.h"

int main() {
    double a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    ComplexClass base= ComplexClass();
    auto one=  ComplexClass(a, b);
    ComplexClass two=  ComplexClass(c,d);
    base.print(two);
    return 0;

}
