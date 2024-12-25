/*
 Digit Counter Develop a Program to count the total number of digits in a number.
    Example :
    Input : Enter any number : 754
    Output : Total number of digits : 3
*/

#include <iostream>
using namespace std;
int main()
{
    int n, ct = 0;
    cout << "Enter any number: ";
    cin >> n;

    while (n != 0)
    {
        ct++;
        n /= 10;
    }

    cout << "Total number of digits: " << ct;

    return 0;
}