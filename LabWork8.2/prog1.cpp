#include <iostream>
using namespace std;

int main()
{
    float row, col, sum = 0;
    float avg;
    cout << " Enter array's row size:";
    cin >> row;

    cout << " Enter array's col size:";
    cin >> col;

    int a[int(row)][int(col)];

    cout << "Enter array's elements:" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];

            sum += a[i][j];
        }
    }

    avg = sum / (sizeof(a) / sizeof(a[0][0]));
    cout << "Average of an Array : " << avg;
    return 0;
}