#include <iostream>

void isEven(int x);

using namespace std; 


int main(){

    int a;
    cout << "Enter the number : \n";
    cin >> a;
    isEven(a);
    return 0;


}
void isEven (int x ) {

    if(x%2==0){
        cout << "Even." << '\n';
    }else {
        cout<< "Odd. " << '\n';
    }

}