/*
Develop a program that prints the given Inverted Left half triangle pattern using a nested for loop.
 1 0 1 0 1
   1 0 1 0
     1 0 1
       1 0
         1
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int k = 2; k <= i; k++)
        {
            cout << "  ";
        }

        for (int j = 5; j >= i; j--)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}
