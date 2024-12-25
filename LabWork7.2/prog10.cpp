/*
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

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

        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }

        for (int m = i-1; m >= 1; m--)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    return 0;
}

