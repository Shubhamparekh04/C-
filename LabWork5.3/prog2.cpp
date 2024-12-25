#include <iostream>
using namespace std;

int main() {
    int ch, sl;

    cout << "Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\nEnter your choice: ";
    cin >> ch;

    switch (ch) {
    case 1:
        cout << "\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\nEnter your choice: ";
        cin >> sl;

        switch (sl) {
        case 1:
            cout << "\nYou have successfully done an Internet Recharge." << endl;
            break;

        case 2:
            cout << "\nYou have successfully done a Top-up Recharge." << endl;
            break;

        case 3:
            cout << "\nYou have successfully done a Special Recharge." << endl;
            break;

        default:
            cout << "\nInvalid Choice" << endl;
            break;
        }
        break;

    case 2:
        cout << "\nInternet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\nEnter your choice: ";
        cin >> sl;

        switch (sl) {
        case 1:
            cout << "\nAapne safaltapurvak Internet Recharge kar liya he." << endl;
            break;

        case 2:
            cout << "\nAapne safaltapurvak Top-up Recharge kar liya he." << endl;
            break;

        case 3:
            cout << "\nAapne safaltapurvak Special Recharge kar liya he." << endl;
            break;

        default:
            cout << "\nInvalid Choice" << endl;
            break;
        }
        break;

    case 3:
        cout << "\nInternet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\nEnter your choice: ";
        cin >> sl;

        switch (sl) {
        case 1:
            cout << "\nTame safaltapurvak Internet Recharge karyu chhe." << endl;
            break;

        case 2:
            cout << "\nTame safaltapurvak Top-up Recharge karyu chhe." << endl;
            break;

        case 3:
            cout << "\nTame safaltapurvak Special Recharge karyu chhe." << endl;
            break;

        default:
            cout << "\nInvalid Choice" << endl;
            break;
        }
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }

    return 0;
}
