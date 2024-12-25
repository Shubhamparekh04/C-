/*

//Syntax

class BaseClass1
{

};

class BaseClass2
{

}


class DeriveClass : public BaseClass1,public BaseClass2
{

}
*/

#include <iostream>
using namespace std;
class Engine
{
public:
    char engine_name[50] = "V8";
};

class Wheels
{
public:
    char wheel_comp_name[50] = "MRF";
};

class Car : public Engine, public Wheels
{
public:
    void make()
    {
        cout << "A new car is preparing with engine of " << this->engine_name << "and wheels of" << this->wheel_comp_name << endl;
    }
};

int main()
{
    Car obj;

    obj.make();
    return 0;
}