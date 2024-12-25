// 1. Conver string to toggle case.

#include <iostream>
using namespace std;

int main()
{

    char str[20] = "HelLo worLD";
    char upperStr[20];

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            upperStr[i] = char(str[i] - 32);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
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