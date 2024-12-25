
// 9.1  pointer;

// shallow copy
// deep copy

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int *b[5];

//     for (int i = 0; i < 5; i++)
//     {
//         b[i] = &a[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << *b[i] << " ";
//     }

//     return 0;
// }
//-------------------------------------------------------------

// Argument passing

/*
1. Passing value or simple variable
    int x= 5,y=3;
    addition(5,3) or addition(x,y)

2. Array

    void func(int n[]){
        cout<< n[1]
    }

    int a[3] = {6,3,1}
    func(a);

3. Pointer

    void func(int *ptr){
        cout << ptr ; // will print address
    }

    int x =10;
    int *p = &x;

    func(p);


4. Address

    void func(int *ptr){
        cout << ptr ; // will print address
    }

    int x =10;

    func(&x); // passing address

*/

// Function Calling

/*
1. by value
2. by refrence
3. by Const reference
*/

/*
// 1

#include <iostream>
using namespace std;

int increment(int n)
{
    n = n + 10;
    return n;
}

int main()
{

    int x = 7;

    cout << increment(x);

    return 0;
}
*/

/*
// 2

#include <iostream>
using namespace std;

void increment(int &n)
{
    n = n + 10;
}

int main()
{

    int x = 7;
    cout << "Before : " << x << endl;

    increment(x);

    cout << "After : " << x;

    return 0;
}
*/

// ---------------------------------------------------------------------

/*
 */
// #include <iostream>
// using namespace std;

// int main()
// {
    // int &y = x;

    // int a = 10;
    // int *b = &a;

    // cout << y <<endl;
    // cout << &x ;

    // int x = 10;
    // int &ptr = x;


    // cout << &x << endl;
    // cout << &ptr << endl;

    // int x = 10;
    // int *ptr = &x;

    // cout << &x << endl;
    // cout << &ptr << endl;

    // return 0;
// }
