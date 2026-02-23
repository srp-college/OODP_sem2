//naturalSum.cpp
#include <iostream>

using namespace std;


int main(){

    int n, i = 1, sum = 0;
    
    cout << "Enter a number: ";
    cin >> n;

    while(i <= n) {
        sum += i; // Add current number to total
        i++;      // Move to next number
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum;
    return 0;
}
