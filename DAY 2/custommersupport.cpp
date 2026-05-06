# include <iostream>
using namespace std;
int main()
{
    int help;

    cout << "Enter the number of times you need help: press 1. support,2. billing,3. technical,4. resolved" << endl;
    cin >> help;
    switch (help)
    {    case 1:
        cout << "hii , how can I help you?" << endl;
        break;
    case 2:
        cout << "Your Bill will be there in a moment." << endl;
        break;
    case 3:
        cout << "Please wait while we connect you to a representative." << endl;
        break;
    case 4:
        cout << "Your issue has been resolved. Thank you for contacting customer support." << endl;
        break;
    default:
        cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        break;  
    }





return 0;



}