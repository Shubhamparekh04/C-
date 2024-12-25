/*
5 4 3 2 1 
  4 3 2 1 
    3 2 1 
      2 1 
        1 
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << "  ";
        }

        for (int k = 6-i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}