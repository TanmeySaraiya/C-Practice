
#include <iostream>


using namespace std;

class Base{
    
    public:
    int x;
    static int y;
    void printX(){
        cout<<x<<" "<<y<<endl;
    }
    static void printY(){
        cout<<y<<endl;
    }
};

int Base::y;

int main(){
    Base b1;
    b1.x=10;
    b1.y=40;
    Base b2;
    b2.x=20;
    b2.y=30;
    Base::y=50; //Can be accesed directly by class
    b1.printX();
    b1.printY();
    Base::printY();
    return 0;
}

