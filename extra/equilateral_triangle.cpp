# include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}