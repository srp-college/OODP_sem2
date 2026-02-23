#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    while (true)
    {
        cout << "ENTER THE YEAR : ";
        cin >> a;
        if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
        {
            cout << a << setw(10)<< "LEAP YEAR\n";
        }
        else
        {
            cout << " Not leap year!\n";
        }
    }
    return 0;
}