# include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c >= 'A' && c <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "The character is lowercase." << endl;
    } else {
        cout << "The character is not an alphabet." << endl;
    }
    return 0;
}