/*
1 0 1 0 1 
0 1 0 1 
1 0 1 
0 1 
1 
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << ((j % 2 == 0) ? 0 : 1) << " ";
        }
        cout << endl;
    }
    return 0;
}