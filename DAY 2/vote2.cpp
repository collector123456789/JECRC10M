# include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >100)
    {
        cout << "You are  Very much eligible to vote." << endl;
    }
    else if (age > 17)
    {
        cout << "You are eligible to vote." << endl;
    }
    else if (age < 0)
    {
        cout << "Invalid age entered." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}