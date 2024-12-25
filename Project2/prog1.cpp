// 1.Alphabet Skipper Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.

#include <iostream>
using namespace std;

int main()
{
    char alphabet = 'a';

    do
    {
        cout << alphabet << " ";
        alphabet += 4;
    } while (alphabet <= 'z');

    return 0;
}
