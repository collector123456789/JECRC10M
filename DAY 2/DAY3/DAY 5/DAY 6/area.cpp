#include <iostream>
#include <cmath>
using namespace std;

class circle {
public:
    double radius;
    double area;

    circle(double r) {
        area = 3.14 * r * r;
    }

    circle(double L, double W) {
        area = L * W;
    }

   

    void display() {
        cout << "Area: " << area << endl;
    }
};

int main() {
    circle c1(5.0);
    c1.display();

    circle c2(4.0, 6.0);
    c2.display();

   

    return 0;
}