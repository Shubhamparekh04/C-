// Array of objects
/*

Syntax:
------
class_name object_name[size];

Example:
-------
Student students[5];

*/

/*
 */
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

    void setData()
    {

        cout << "Enter GRID : ";
        cin >> this->grid;

        cout << "Enter Name : ";
        cin >> this->name;
        cout << "Enter Age : ";
        cin >> this->age;
        cout << "Enter Course : ";
        cin >> this->course;
        cout << "Enter Percentage : ";
        cin >> this->percentage;
    }

    void getData()
    {
        cout << "GRID : " << grid
             << " Name : " << name
             << " Age : " << age
             << " Course : " << course
             << " Percentage : " << percentage << endl;
    }
};

int main()
{
    Student Stud[2];

    for (int i = 0; i < 2; i++)
    {
        Stud[i].setData();
    }

    for (int j = 0; j < 2; j++)
    {
        Stud[j].getData();
    }

    return 0;
}