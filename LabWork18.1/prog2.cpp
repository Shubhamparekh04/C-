//WAP to multiply two value values using template

#include <iostream>
using namespace std;
template <typename T>
T multy(T a, T b)
{
    cout << a * b;
}
int main()
{

    multy(5, 8);

    return 0;
}