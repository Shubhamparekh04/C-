#include <iostream>

using namespace std;

int main()
{
    char pwd[6];
    int ch = 0, num = 0, i, sc = 0;

    cout << "Enter Password : " << endl;
    cin >> pwd;

    for (i = 0; pwd[i] != '\0'; i++)
    {
        if (pwd[i] >= 'a' && pwd[i] <= 'z' || pwd[i] >= 'A' && pwd[i] <= 'Z')
        {
            ch = 1;
        }

        if (pwd[i] >= 0 && pwd[i] <= 9)
        {
            num = 1;
        }

        if (!(pwd[i] >= 'a' && pwd[i] <= 'z') && !(pwd[i] >= 'A' && pwd[i] <= 'Z') && !(pwd[i] >= 0 && pwd[i] <= 9))
        {
            sc = 1;
        }
    }


    if (ch == 1 && num == 1 && i >= 6 && sc == 1)
    {
        cout << "Strong";
    }
    else
    {
        cout << "Weak";
    }

    return 0;
}