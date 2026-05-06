# include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Multiplication table is not defined for negative numbers." << endl;
        return 1; 
    }

    cout << "Multiplication Table for " << n << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0; 
}