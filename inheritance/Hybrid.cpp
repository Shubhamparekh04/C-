/*

//Syntax

class BaseClass
{

};

class DeriveClass 1 : Public BaseClass
{

}

class DeriveClass 2 : Public BaseClass
{

}

class DeriveClass 3 : Public DeriveClass1, Public DeriveClass2
{

}



*/

#include <iostream>
using namespace std;
class A
{
public:
    void top()
    {
        cout << "From Class A";
    }
};

class B : public A
{
public:
    void sideB()
    {
        cout << "From Class B";
    }
};

class C : public A
{
public:
    void sideC()
    {
        cout << "From Class C";
    }
};

class D : public B, public C
{
};

int main()
{

    D obj;
    // obj.top(); it's ambiguas
    obj.B::top();
    obj.C::top();

    return 0;
}