# include <iostream>
using namespace std;

class student {
    public:
    string name;
    int roll;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll.No: " << roll << endl;
    }
};
 int main (){
    student s1; 
    s1.name =  "Arry";
    s1.roll = 101;
    s1.display();
    return 0;
        



    }

