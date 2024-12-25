/*
1. Two or more number of classes should be there
2. Method name & parameter should be same
3. Inheritance is required
*/

#include <iostream>
using namespace std;

class India
{
public:
// added virtual keyword to parents method to avoid accessing parents method when we do as line number "55";
    virtual void wearing()
    {
        cout << "dhoti-kurta..." << endl;
    }
};

class Pak : public India
{
public:
    void wearing()
    {
        cout << "Pathani-kurta..." << endl;

        // India :: wearing();

        //       or

        // India obj;
        // obj.wearing();
    }
};

int main()
{
    Pak aman;
    aman.wearing();

    Pak *aman;
    aman->wearing();

    /*********************************/

    // India *obj;
    // India o1;
    // Pak o2;

    // obj = &o1;
    // obj->wearing();

    // or

    // obj = &o2;
    // obj->wearing();

    return 0;
}