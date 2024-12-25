#include <iostream>
using namespace std;

void check(int);

int main()
{

    check(15);

    return 0;
}

void check(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << n << " is divisible by both 3 & 5";
    }
    else
    {
        cout << n << " is Not divisible by both 3 & 5";
    }
}