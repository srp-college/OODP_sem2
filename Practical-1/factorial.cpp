#include <iostream>
using  namespace std;
int main() {
    int num, fact=1;
    cout << "Enter any number :  ";
    cin >> num;
    for (int i=1; i<=num; i++){
        fact = fact*i;
    }
    cout << "The factorial value of " << num << "is " << fact << endl;
    return 0;

}