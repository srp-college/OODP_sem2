#include <iostream> 
using namespace std; 

/*formulae : 
 F = (c * (9/5)) + 32
 C = (f - 32)*(5/9) 
*/
float degToFn(float deg) { 
    float c=deg, fn;
    fn = (c * (9/5)) + 32; 
    return fn;
}

float fnToDeg(float Fn){ 
    float F=Fn, Deg;
    Deg = (F - 32)*(5/9);
    return Deg;  
}
 
int main() { 
    cout << "Choose the operation : \n1. Degree to Fahrenheit.\n2. Fahrenheit to Degree.\n";
    int opt;
    cin>>opt;
    if (opt == 1) { 
        cout << "Enter Degree to convert to Fahrenheit.\n";
        int deg;
        cin >> deg; 
        cout << "Fahrenhiet of " << deg << " is " << degToFn(deg); 
        return 0;
    } else if (opt == 2) { 
        cout << "Enter fahrenhiet to convert to Degree.\n";
        int fn;
        cin >> fn;
        cout << "Fahrenhiet of " << fn << " is " << fnToDeg(fn);
        return 0; 
    } else { 
        for ( long i=0; i < 20; i++ ) { 
        cout << "invalid operation!\n 404$ Computer hacked\n";
        }
    }
}