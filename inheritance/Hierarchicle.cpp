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



*/

#include <iostream>
using namespace std;
class Vehical
{
public:
    void drive()
    {
        cout << "Vehicle can be driven" << endl;
    }
};

class Car : public Vehical
{
public:
    void wheels()
    {
        cout << "A bike have 4 wheels" << endl;
    }
};

class Bike : public Vehical
{
public:
    void wheels()
    {
        cout << "A bike have 2 wheels" << endl;
    }
};

int main()
{

    Car obj1;
    Bike obj2;

    obj1.drive();
    obj1.wheels();
    
    obj2.drive();
    obj2.wheels();

    return 0;
}