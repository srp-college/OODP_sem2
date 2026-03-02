#include <iostream>
using namespace std;
#define Pi 3.14
void areasCalc(){
    cout << "Enter the operation :\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle " << endl;
    int var;
    cin >> var;
    if (var == 1){ 
        cout << "Enter the radias of circle (D/2) in cm : " << endl;
        int rad;
        cin >> rad;
        cout << "Area of circle is : " << Pi * rad * rad << "cm^2";
       
    } else if (var == 2) {
        cout << "Enter the Length of Rectangle in cm : " << endl;
        int l, b;
        cin >> l;
        cout << "Enter the breadth of Rectangle in cm : " << endl;
        cin >> b;
        cout << "Area of the Rectangle : " << l*b << "cm^2" << endl;
    } else if (var == 3) { 
         cout << "Enter the Length of Triangle in cm : " << endl;
        int h, base;
        cin >> h;
        cout << "Enter the breadth of Triangle in cm : " << endl;
        cin >> base;
        cout << "Area of the Rectangle : " << (1/2)*(h*base) << "cm^2";
    } 
}

int main() {
    while(true) { 
    areasCalc();
    }
    return 0;

}