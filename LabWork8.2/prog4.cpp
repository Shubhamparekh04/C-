#include <iostream>
using namespace std;
int main()
{

    int a[5][5];

    cout << "Enter array's elements :" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "a[" << i << "] [" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}