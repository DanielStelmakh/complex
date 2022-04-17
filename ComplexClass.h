//
// Created by HP on 17.04.2022.
//

#ifndef COMPLEX_COMPLEXCLASS_H
#define COMPLEX_COMPLEXCLASS_H

#include <iostream>

using namespace std;
class ComplexClass {
public:double a,b;
    ComplexClass()=default;
    ComplexClass(double _a,double _b){
        a=_a;
        b=_b;
    }
    ComplexClass plus(ComplexClass first,ComplexClass second){
        double a=first.a+second.a;
        double b=first.b+second.b;
        return {a,b};
    }
    ComplexClass minus(ComplexClass first,ComplexClass second){
        double a=first.a-second.a;
        double b=first.b-second.b;
        return {a,b};
    }
    ComplexClass multi(ComplexClass first,ComplexClass second){
        double a= (first.a*second.a)-(first.b*second.b);
        double b=(first.b*second.a)+(first.a*second.b);
        return {a,b};
    }
    ComplexClass changeSign(ComplexClass single){
        return {single.a,-single.b};
    }
    ComplexClass slash(ComplexClass first,ComplexClass second){
        ComplexClass a= multi(first, changeSign(second));
        ComplexClass b= multi(second, changeSign(second));
        return {a.a/b.a,a.b/b.a};

    }
    void print(ComplexClass a){
        cout<<a.a<<"+"<<a.b<<"*i";
    }


};


#endif //COMPLEX_COMPLEXCLASS_H
