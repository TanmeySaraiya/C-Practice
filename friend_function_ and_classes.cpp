
#include <iostream>
using namespace std;


class Base{
    int x;
public:
    Base(){}
    Base(int a):x{a}{}
    //friend void set(Base&, int x);
    //friend void get(Base&);
};

void set(Base& obj,int x){obj.x=x;}
void get(Base&){return obj.x;}

int main(){
    Base b1;
    Base b2(10);
    return 0;
}

