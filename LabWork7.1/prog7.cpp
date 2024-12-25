/*
 A
B A
C B A
D C B A
E D C B A
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 'A'; i <= 'E'; i++)
    {
        for (int j = i; j >= 'A'; j--)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
    return 0;
}