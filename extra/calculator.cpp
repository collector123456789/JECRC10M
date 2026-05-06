# include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter the operation +,-,*,/:";
    cin>>c;

    cout << "Enter two integers: ";
    cin >> a >> b;
    switch(c){
        case '+':
            cout<<"Result: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Result: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Result: "<<a*b<<endl;
            break;
        case '/':
            if(b!=0){
                cout<<"Result: "<<a/b<<endl;
            }else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }


    return 0;
}