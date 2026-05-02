# include <iostream>
using namespace std;
int main()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "password123") {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }
}