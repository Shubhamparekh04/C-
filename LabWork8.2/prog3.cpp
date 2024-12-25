#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array's row & column size :";
    cin >> n;

    int a[n][n], sum = 0;

    cout << "Enter array's elements :" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "] [" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }

    cout << "The sum of diagonal elements of an Array: " << sum;
    return 0;
}