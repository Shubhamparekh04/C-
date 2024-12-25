// Data Encapsulation / Hiding

// #include <iostream>
// using namespace std;

// class test
// {
// public:
//     int roll_no;
// };

// int main()
// {
//     test t1;

//     t1.roll_no = 10;
//     cout << t1.roll_no;

//     return 0;
// }

/*

Note : both method must be public to access & modify data menbers

setter() : used to initialized data members
getter() : used to access the data members
//  This keyword

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int grid;
    string name;
    int age;
    string course;
    float percentage;

    void setData(int g, string n, int a, string c, float p)
    {
        grid = g;
        name = n;
        age = a;
        course = c;
        percentage = p;
    }

    void getData()
    {
        cout << "GRID : " << grid
             << " Name : " << name
             << " Age : " << age
             << " Course : " << course
             << " Percentage : " << percentage << endl;
    }

    Student *getCurObj()
    {
        return this;
    }
};

int main()
{
    Student Student1, Student2, Student3;

    Student1.setData(1, "Jay", 25, "DSA", 80.88);
    Student2.setData(2, "Ajay", 26, "JS", 88.88);

    // Student3 = *Student1.getCurObj();
    // Student3 = Student1;

    Student1.getData();
    Student2.getData();
    Student3.getData();

    return 0;
}
*/

// Private attribute
/*
#include <iostream>
using namespace std;

class Bank
{
private:
    int bal = 5000;

public:
    void getBal(int acc)
    {
        if (acc == 123)
        {
            cout << this->bal;
        }
        else
        {
            cout << "Invalid account number.";
        }
    };
};

int main()
{
    Bank b1;

    b1.getBal(123);
    return 0;
}
 */