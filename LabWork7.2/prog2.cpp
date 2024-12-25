/*
        5 
      4 5 
    3 4 5 
  2 3 4 5 
1 2 3 4 5 
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "  ";
        }

        for (int k = 6-i; k <= 5; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}