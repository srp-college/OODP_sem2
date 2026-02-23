#include <iostream> 
using namespace std;

int cube(int x) { 
    return x*x*x;
}

int main() { 
    int a;
    cout<< "Enter the number :  " << endl;
    cin >> a;
    cout << "Cube of entered num : " << cube(a);

    return 0;




}