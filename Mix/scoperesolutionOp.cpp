/*
Scope resolution operator

Use:
---
1. Access global variable
2. Access static members


// Example
#include<iostream>
using namespace std;
int globalVar =100;

int main(){
    cout << :: globalVar;
  return 0;
}
*/

/*

// Use 1

#include <iostream>
#include <string>

using namespace std;

// Global variable
int x = 100;

int main()
{

    // Local variable{
    int x = 50;

    cout << "GLobal " << ::x << endl;
    cout << "Local " << x << endl;
    return 0;
}
*/

/*
// Use 2 : static
static variable creates only one time in ram and shared amonb all objects.

// Usecase of static keyword
1. Static data member: (Shared among all object of perticulor class)
2. Static Member Function : ( )

// Usecase 1 :  Static data member
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int grid;
    static string sName;
    int age;
    string course;
    float percentage;
};

string Student::sName = "Bharat";

int main()
{

    cout << "Name : " << Student::sName;

    return 0;
}

*/

/*

// Usecase 2 : Static Member Function : ( )
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int grid;
    static string sName;
    int age;
    string course;
    float percentage;

    static void display()
    {
        cout << "Name is : " << sName;
    }
};

string Student::sName = "Bharat";

int main()
{

    // cout << "Name : " << Student::sName;

    Student ::display();

    return 0;
}
*/