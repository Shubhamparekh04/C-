//1. Conver string to lower case.

#include <iostream>
#include <string>
using namespace std;

int main()
{

    char str[20] = "HELLO WORLD";
    char upperStr[20];

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upperStr[i] = char(str[i] + 32);
        }
        else
        {
            upperStr[i] = str[i];
        }
    }

    cout << upperStr;

    return 0;
}