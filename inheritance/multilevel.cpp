/*

//Syntax

class BaseClass
{

};

class DeriveClass1 : public BaseClass
{

}


class DeriveClass2 : public BaseClass
{

}
*/

#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Animal is Barking..." << endl;
    }
};

class Pitbull : public Dog
{
    public:
    void name()
    {
        cout << "Name is pitbull..." << endl;
    }
};

int main()
{
    Dog obj;

    obj.eat();
    obj.bark();
    return 0;

    Pitbull obj1;
    obj1.name();
}