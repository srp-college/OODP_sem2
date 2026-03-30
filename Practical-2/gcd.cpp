#include <iostream> 
using namespace std;
int findGcd(int a, int b) { 
    if (b==0) { 
        return a;
    }else {
        return findGcd(a, a%b); 
    }
}
intit 9 main() { 
    int num1, num2; 
    cout << "Enter two numbers : " ;
    cin >> num1 >> num2;
    int gcd = findGcd(num1, num2); 
    cout << "The GCD of Number " << num1 << " And " << num2 << " is " << gcd << endl;
    
}