#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 values: ";
    cin >> a >> b >> c;

    cout << "The minimum value is: " << (a < b ? (a < c ? a : c) : (b < c ? b : c)) << endl;

    return 0;
}
