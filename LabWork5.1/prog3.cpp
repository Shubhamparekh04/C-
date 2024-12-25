#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float m1, m2, m3;

    cout << "Enter Maths marks:" << endl;
    cin >> m1;
    cout << "Enter English marks:" << endl;
    cin >> m2;
    cout << "Enter Science marks:" << endl;
    cin >> m3;

    if (m1 > 0 && m2 > 0 && m3 > 0)
    {
        cout << "Average mark:" << fixed << setprecision(2) << (m1 + m2 + m3) / 3;
    }
    else
    {
        cout << "Kindly enter positive values";
    }
    return 0;
}