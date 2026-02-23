#include <iostream>



void greatOfThree( int x, int y, int z);

using namespace std; 

int main() {

int a, b, c;

cout << "Enter three numbers : \n";
cin >> a>> b>>c;
greatOfThree(a, b, c);

return 0;
}

void greatOfThree( int x, int y, int z) { 
    if (x>y && x>z){ 
        cout << x << "is Greatest of Given three. \n";
    } else if (y>x && y>z){
        cout << y << "is Greatest of Given three. \n";
    }else { 
        cout << z << "is Greatest of Given three. \n";
    }
}