# include <iostream>
using namespace std;
int main() {
    int seconds;
    cout << "Enter the number of seconds for the countdown: ";
    cin >> seconds;

    while (seconds > 0) {
        cout << "Time remaining: " << seconds << " seconds" << endl;
        seconds--;
    }

    cout << "Time's up!" << endl;

    return 0 ; 
}