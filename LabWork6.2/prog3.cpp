#include <iostream>
using namespace std;
int main()
{

    int n, i = 1;
    cout << "Enter N: ";
    cin >> n;

    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;

    } while (i <= n);

    return 0;
}