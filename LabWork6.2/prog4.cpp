#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n;

    cout << "Enter N number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}