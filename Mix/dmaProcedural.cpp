#include <iostream>
using namespace std;

int main()
{
    int size;
    int *arr;

    cout << "Enter size: ";
    cin >> size;

    arr = new int[size];

    if (arr == NULL)
    {
        cout << "failed";
    }
    else
    {
        cout << "success";
    }

    delete[] arr;
    return 0;
}