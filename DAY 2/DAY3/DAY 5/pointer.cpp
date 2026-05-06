# include <iostream>
using namespace std;
int main (){
    int a = 10;
    int * ptr= &a;
    cout << ptr;
    *ptr = 20;
    cout << a;
    cout << *ptr;
}