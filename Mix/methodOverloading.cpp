/*
Method  overload
-------------------
*/

#include <iostream>
using namespace std;

class Vehicle
{
public:
    void truck()
    {
        cout << "Empty truck is running" << endl;
    }

    void truck(int n)
    {
        cout << "Truck is running with " << n << " passangers" << endl;
    }

    void truck(int n, int q)
    {
        cout << "Truck is running with " << n << " passangers and " << q << " Goods..." << endl;
    }
};

int main()
{

    Vehicle v1;
    v1.truck();
    v1.truck(5);
    v1.truck(5, 12);

    return 0;
}
