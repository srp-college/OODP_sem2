#include <iostream>
using namespace std; 

int swap(int x, int y);

int main() {
    int a, b, temp;
    cout << "Enter Two Numbers : " << endl;
    cin  >> a>> b;
    swap(a, b);
}

int swap(int x, int y) { 
    int temp;

    temp=x;
    x=y;
    y=temp;
    cout << x << "  " << y << " After swap.";

}