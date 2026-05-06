# include <iostream>
using namespace std;
int summ( int a = 14,int b, int c){
    int add = a + b + c;
    return add;
}
int main (){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a>> b >> c;
    cout << "The sum of the three numbers is: " << summ( a, b, c) << endl;
    return 0;
}