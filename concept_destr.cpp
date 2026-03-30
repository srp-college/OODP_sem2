//write a cpp porhram to demonstrate the concept of destructor 
#include <iostream> 
using namespace std;
class demo
{
public: 
demo()
{
    cout << "Object is created "<< endl;

}
~demo()
{
    cout << "object is destoryed " << endl;
}
};
int main() {
    demo a1;
    return 0;

}