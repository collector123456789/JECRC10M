# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The numbers divisible by 2  are: "<<endl;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}