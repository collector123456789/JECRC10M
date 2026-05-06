# include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Prime numbers are not defined for negative numbers." << endl;
        return 1; 
    }
    for (int i = 2; i <= number; ++i) {
        bool is_prime = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << i << " ";
        }
    }
