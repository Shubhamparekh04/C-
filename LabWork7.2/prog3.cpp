/*
        5 
      4 4 
    3 3 3 
  2 2 2 2 
1 1 1 1 1 
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
            cout << 6-i << " ";
        }
        cout << endl;
    }
    return 0;
}