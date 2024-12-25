/*

1 2 3 4 5 5 4 3 2 1 
1 2 3 4     4 3 2 1 
1 2 3         3 2 1 
1 2             2 1 
1                 1 

*/

#include <iostream>
using namespace std;

int main()
{
  for (int i = 5; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    for (int k = 4; k >= i; k--)
    {
      cout << "    ";
    }

    for (int l = i; l >= 1; l--)
    {
      cout << l << " ";
    }
    cout << endl;
  }
  return 0;
}