#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter row :";
    cin >> row;
    cout << "Enter col :";
    cin >> col;

    int a[row][col], b[row][col], c[row][col];

    cout << "Enter array A's elements :" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "] [" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "Enter array B's elements :" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "b[" << i << "] [" << j << "] = ";
            cin >> b[i][j];

            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Array C is: ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << c[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}