#include <iostream>
using namespace std;

int main()
{
    int sy, ey;

    cout << "Enter Startyear : ";
    cin >> sy;

    cout << "Enter End year : ";
    cin >> ey;

    while (sy <= ey)
    {
        if ((sy % 4 == 0 &&sy % 100 != 0) || (sy % 400 == 0))
        {
            cout << sy <<" ";
        }
        sy++;
    }
    return 0;
}