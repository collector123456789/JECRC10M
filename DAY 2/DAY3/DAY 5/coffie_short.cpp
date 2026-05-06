# include <iostream>
using namespace std;
int vol (int v){
    int mul = v *30;
    return mul;
}
int main (){
    int v;
    cout << "Enter the volume of the coffee: ";
    cin >> v;
    cout << "The price of the coffee is: " << vol(v) << endl;
    return 0;
}