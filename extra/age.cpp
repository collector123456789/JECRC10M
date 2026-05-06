# include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    do {
        cout<<"Eligible to vote"<<endl;
    }
    while (age!=18)
    {
        cout<<"Not eligible to vote" <<endl;
    }
    
    return 0;
