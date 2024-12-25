/*
minimum of 2 num
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter Second number:" << endl;
    cin >> b;

    cout << ((a > b) ? b : a) << " is minimum";
    return 0;
}