/*
Constructors: (use is to initialised class attributes)

Special kind of function which executes as the object is initiated:

//1. Default

#include <iostream>
using namespace std;

class City
{
public:
    int id;

    City() // Constructor is same as class name
    {
        cout << "Welcome to my city : " << endl;
    }
};

int main()
{
    City c[10];
    return 0;
}



//2.Parameterised



#include <iostream>
using namespace std;

class City
{
public:
    int id;

    City() // Constructor is same as class name
    {
        cout << "Welcome to my city : " << endl;
    }

    City(int n) // Parameterised Constructor
    {
        this->id = n;
        cout << "Id is  : " << this->id << endl;
    }
};

int main()
{
    City c[10];
    City c2(5);
    return 0;
}



//3. Copy constructor


*/

#include <iostream>
using namespace std;

class City
{
public:
    int id;

    City() // Constructor is same as class name
    {
        cout << "Welcome to my city : " << endl;
    }

    City(int n) // Parameterised Constructor
    {
        this->id = n;
        cout << "Id is  : " << this->id << endl;
    }
};

int main()
{
    City c1;
    City c2(3);

    cout << c2.id;

    City c3 = c2; // shadow copy
    // c3.id = 3;

    cout << c3.id;

    City c4(c2);

    cout << "c4 : " << c4.id;

    return 0;
}