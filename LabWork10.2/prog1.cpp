#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int tot = 0;
    for (int i = 0; i < size; i++)
    {
        tot += arr[i];
    }
    cout << "The sum of the array elements is: " << tot << endl;
}

int main()
{
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
    }

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sum(arr, size);
    return 0;
}
