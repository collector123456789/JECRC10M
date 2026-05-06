# include <iostream>
using namespace std;
class student {
    private:
    int roll= 1;
    public:
    string name;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll.No: " << roll << endl;
    }


};


int main (){
    student s1; 
    s1.name =  "Arry";
    s1.display();
    




}
