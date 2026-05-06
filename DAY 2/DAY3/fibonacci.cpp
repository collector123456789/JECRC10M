# include <iostream>
using namespace std;
int main (){





    int n;
    cout << "Enter a positive integer: ";
    cin >> n; 


    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
        return 1; 
    }

    
    int a = 0, b = 1, fib;
    if (n == 0) {
        fib = a;
    } else if (n == 1) {
        fib = b;
    } else {
        for (int i = 2; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    cout << "Fibonacci of " << n << " is " << fib << "." << endl;

    return 0;
}