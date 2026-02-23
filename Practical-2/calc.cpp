#include <iostream>
using namespace std;

void calc(int x, int y)
{
    cout << "Choose one option :\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n ";
    int m;
    cin >> m;
    if (m == 1)
    {
        cout << "Addition : " << x + y;
    }
    else if (m == 2)
    {
        cout << "Subtraction : " << x - y;
    }
    else if (m == 3)
    {
        cout << "Multiplication" << x * y;
    }
    else if (m == 4)
    {
        
        if (y != 0)
        {
            float x1 = x;
            float y1 = y;

            float a1 = x1 / y1;

            cout << "Division: " << a1 << endl;
        }
        else
        {
            cout << "You can't use " << y << " for this operation!" << endl;
        }
    }
    else
    {
        cout << "Invalid operation!";
    }
}

int main()
{

    int a, b;
    cout << "enter the values of operations!";
    cin >> a >> b;
    calc(a, b);
    return 0;
}