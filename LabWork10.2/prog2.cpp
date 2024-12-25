#include <iostream>
using namespace std;

void displayLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "The length of the string is: " << length << endl;
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    displayLength(str);
    return 0;
}
