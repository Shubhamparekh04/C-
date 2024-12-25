// minimum of 4

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter First number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter third number : ";
    cin >> c;

    cout << "Enter forth number : ";
    cin >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "The maximum value is : " << a;
            }
            else
            {
                cout << "The maximum value is : " << d;
            }
        }
        else if (c > d)
        {
            cout << "The maximum value is : " << c;
        }
        else
        {
            cout << "The maximum value is : " << c;
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            cout << "The maximum value is : " << b;
        }
        else
        {
            cout << "The maximum value is : " << d;
        }
    }
    else if (c > d)
    {
        cout << "The maximum value is : " << c;
    }
    else
    {
        cout << "The maximum value is : " << d;
    }

    return 0;
}