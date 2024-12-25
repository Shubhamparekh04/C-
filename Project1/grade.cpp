#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, avg, grade;

    cout << "Enter Your Score for Subject1: " << endl;
    cin >> m1;
    cout << "Enter Your Score for Subject2: " << endl;
    cin >> m2;
    cout << "Enter Your Score for Subject3: " << endl;
    cin >> m3;

    avg = (m1 + m2 + m3) / 3;

    grade = (avg >= 90 ? 'A' : (avg >= 80 ? 'B' : (avg >= 70 ? 'C' : (avg >= 60 ? 'D' : 'F'))));
    cout << "Your Grade is: : " << (avg >= 90 ? 'A' : (avg >= 80 ? 'B' : (avg >= 70 ? 'C' : (avg >= 60 ? 'D' : 'F')))) << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent Work!" << endl;
        break;

    case 'B':
        cout << "Well Done!" << endl;
        break;
    case 'C':
        cout << "Good Job!" << endl;
        break;

    case 'D':
        cout << "You Passe but you could do better" << endl;
        break;

    case 'F':
        cout << "Sorry you Failed!" << endl;
        break;

        return 0;
    }

    if (grade >= 'A' && grade <= 'D')
    {
        cout << "You are eligible for the next level!" << endl;
    }
    else
    {
        cout << "Please try again next time" << endl;
    }
}
