# include <iostream>
using namespace std;
int main() {
    int pin = 82909;
    int input_pin;
    int attempts = 0;
    const int max_attempts = 3;

    while (attempts < max_attempts) {
        cout << "Enter your PIN: ";
        cin >> input_pin;

        if (input_pin == pin) {
            cout << "Access granted. Welcome!" << endl;
            return 0; // Exit the program
        } else {
            attempts++;
            cout << "Incorrect PIN. Try again." << endl;
        }
    }

    cout << "Too many incorrect attempts. Your account is locked." << endl;
    return 0; // Exit the program
}