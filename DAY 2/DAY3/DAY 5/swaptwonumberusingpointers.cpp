# include <iostream>
using namespace std;
int swap (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping: " << *a << " " << *b << endl;
}
int main (){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swap(&a, &b);
    return 0;
}