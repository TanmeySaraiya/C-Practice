
#include <iostream>
using namespace std;


class Base{
 mutable int x;
 int y;
public:
    Base(){}
    Base(int a,int b):x{a},y{b}{}
    void setX(int a){x=a;}
    int getX() const {x=20;return x;} //Only mutable data members can be changed in this function. others cannot be changed
};

int main(){
    Base b1(30,10);
    cout<<b1.getX()<<endl;
    return 0;
}

