#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "admin@gmail.com";
    string pwd = "123456";

    string uEmail, uPwd;

    cout << "Enter Email : " << endl;
    cin >> uEmail;

    cout << "Enter Password : " << endl;
    cin >> uPwd;

    if (email.compare(uEmail) == 0 && pwd.compare(uPwd) == 0)
    {
        cout << "Login Successful...";
    }
    else
    {
        cout << "Login Failed...";
    }

    return 0;
}