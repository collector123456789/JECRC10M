# include < iostream>
using namespace std;
class cricketers {
    public :
    string name;
    int runs;
    double average;
    cricketers (string n, int r, double a){
        name = n;
        runs = r;
        average = a;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << average << endl;
    }
    
};
int main (){
    cricketers c1("Virat Kohli", 12000, 58.16);
    c1.display();
    return 0;
}