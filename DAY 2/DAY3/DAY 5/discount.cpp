# include <iostream>
using namespace std;
int discount (int price){
    int dis = price * 0.1;
    return dis;
}
int main (){
    int price;
    cout << "Enter the price of the item: ";
    cin >> price;
    cout << "The discount on the item is: " << discount(price) << endl;
    return 0;
}