/*
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
        for (int j = 2; j <= i; j++)
        {
            cout << "  ";
        }

        for (int k = 5; k >= i; k--)
        {
            cout << ((k % 2 == 0) ? 0 : 1) << " ";
        }
        cout << endl;
    }
    return 0;
}