#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter array size :";
    cin >> size;

    int a[size];

    cout << "Enter array elements :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Length of an array : " << sizeof(a) / sizeof(a[0]);
    return 0;
}