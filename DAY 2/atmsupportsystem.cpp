# include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;
    if (amount > 100000)
    {
        cout << "Sorry, you cannot withdraw more than $1000." << endl;
    }
    else if (amount <= 0)
    {
        cout << "Invalid amount entered." << endl;
    }
    else
    {
        cout << "You have withdrawn " << amount << "." << endl;

    }
    return 0;
}