#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    // 30 = 10 + 20
    a = a + b;

    // 10 = 30 - 20
    b = a - b;

    a = a - b;

    cout << a << endl;
    cout << b << endl;
    return 0;
}