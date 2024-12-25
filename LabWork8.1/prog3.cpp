#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter array size :";
    cin >> size;

    int a[size], b[size], c[size];

    cout << "Enter array A's elements :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Enter array B's elements :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "b[" << i << "] = ";
        cin >> b[i];

        c[i] = a[i] + b[i];
    }

    cout << "Array C is: ";

    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}