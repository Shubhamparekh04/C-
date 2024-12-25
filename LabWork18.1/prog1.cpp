// WAP to add two values using template

#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    cout << a + b;
}
int main()
{

    add(5, 8);

    return 0;
}