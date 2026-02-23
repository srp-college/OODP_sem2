#include <iostream>
using namespace std;

int main() {
    cout<< "Enter the number :  " << '\n';
    int a;
    cin >> a;
    if ( a>=0 ) {

        cout<< "Positive.";
        return 0;
    }
    else {
        cout << "Negative.";
        return 0;
    }
    
}