# include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    float avg;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    avg=(float)sum/n;
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    cout<<"The average of first "<<n<<" natural numbers is: "<<avg<<endl;
    
    return 0;
}