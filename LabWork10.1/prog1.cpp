#include <iostream>
using namespace std;

void cube(int);

int main()
{

    cube(5);

    return 0;
}

void cube(int n)
{
    cout << n * n * n;
}