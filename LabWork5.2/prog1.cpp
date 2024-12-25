// minimum of 3

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter First number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter third number : ";
    cin >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << "The minimum value is : " << a;
        }
        else
        {
            cout << "The minimum value is : " << c;
        }
    }
    else if (b < c)
    {
        cout << "The minimum value is : " << b;
    }
    else
    {
        cout << "The minimum value is : " << c;
    }

    return 0;
}