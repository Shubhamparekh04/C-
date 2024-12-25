// Reverse given vector

#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = v.size();

    vector<int> vr(n);

    cout << "Vector is : ";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        vr[i] = v[(n - 1) - i];
    }

    cout << "Rev Vector is : ";

    for (int i = 0; i < n; i++)
    {
        cout << vr[i] << " ";
    }

    cout << endl;

    return 0;
}