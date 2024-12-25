/*
Types of Templates
-------------------
1. Function based
2. Class Based


//Usual way of creating function , but limitation is it couldn't take argument apart from INTEGER datatype
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    cout << add(3, 7);
    return 0;
}
*/

// it will work for both INTEGER & DOUBLE as well
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << add<int>(5, 15);
    cout << add<double>(5.7, 89.45);
    return 0;
}