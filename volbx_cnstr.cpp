// volume of the box using constructor
#include <iostream> 
using namespace std;
class box{ 
    int len, hig, wid;
    public : 
    box(int l, int w, int h){
        len = l;
        wid = w;
        hig = h;

    }
    int volume() { 
        return len*hig*wid;
    }
    void display(){
        cout << "Volume of the Box : " << volume() <<endl;
    }
};
int main(){ 
    int a,b,c;
    cout << "Enter the len, wid, hig of the box : " ;
    cin >> a >> b >> c;
    box obj1(a,b,c);
    obj1.display();
    return 0;
}