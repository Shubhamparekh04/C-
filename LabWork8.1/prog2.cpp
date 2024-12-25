#include <iostream>
using namespace std;
int main()
{
    float size, avg = 0, sum = 0;
    cout << "Enter array size :";
    cin >> size;

    int a[int(size)];

    cout << "Enter array elements :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];

        sum += a[i];
    }

    cout << "Average of an array : " << sum / (sizeof(a) / sizeof(a[0]));
    return 0;
}