/*
1. Static Memory Allocation [stack] /allocation deallocaton manually / compile time / STores functon call & local variables
2. Dynamic Memory Allocation [heap] / allocation deallocation automatic / Runtime

#include <iostream>
using namespace std;
int main()
{

    // int *a = new int;

    // *a = 6;
    // cout<< a<< endl;
    // cout<< *a<< endl;

    // or

    int *a = new int(6);
    cout << a;
    cout << *a << endl;

    return 0;
}
*/

// Dangling pointer

/*
solutions for dangling pointer :
1. Assign null as value
2. Insert new value  or Array.

#include <iostream>
using namespace std;
int main()
{

    int *a = new int(6);

    cout << a << endl;
    cout << *a << endl;

    delete (a);

    // a is now dangling pointer (it will point to any random memory block)
    cout << a << endl;
    cout << *a << endl;

    return 0;
}
*/

// Solution 1: assign null

#include <iostream>
using namespace std;
int main()
{

    int *a = new int(6);

    cout << a << endl;
    cout << *a << endl;

    delete (a);

    a = new int[3];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    cout << endl
         << "Array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }

    delete[] a;
    // a  became dangling pointer

    a = NULL;

    cout << "Value :" << a << endl;
    cout << "Address :" << *a << endl;
    return 0;
}