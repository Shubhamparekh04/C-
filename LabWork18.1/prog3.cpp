// WAP to find Factorial of value using template

#include <iostream>
using namespace std;
template <typename T>

T fact(T a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * fact(a - 1);
}

int main()
{
    cout << "Factorial of 5: " << fact(5) << endl;

    return 0;
}
