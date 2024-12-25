/*
Digit Addition: Develop a Program to find the sum of a number's first and last digits.
Example:
Input: Enter any number: 384
Output: The sum of the first and the last digit: 7

*/

#include <iostream>
using namespace std;

int main()
{
    int num, ct = 0, fn = 0, ln = 0;

    cout << "Enter any number: ";
    cin >> num;

    fn = num % 10;

    while (num != 0)
    {
        ct++;
        ln = num;
        num /= 10;
    }

    cout << "Sum of first and last digit: " << fn + ln;

    return 0;
}


