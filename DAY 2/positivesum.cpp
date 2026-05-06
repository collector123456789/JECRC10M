# include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter a numbers: ";
    cin >> n>> m;
    int sum = 0;
    if (n > 0 && m > 0)
    {
        sum = n + m;
        cout << "The sum of the two numbers is: " << sum << endl;
    }
    else
    {
        cout << "Both numbers must be positive." << endl;
    }
    return 0;

}