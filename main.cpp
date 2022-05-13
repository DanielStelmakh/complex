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
    auto first=base.multi(one,two);
    auto second=base.slash(one,two);
    auto third=base.minus(one,two);
    auto fourth=base.slash(one,two);
    base.print(first);
    base.print(second);
    base.print(third);
    base.print(fourth);
    return 0;

}
