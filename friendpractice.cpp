
#include <iostream>
using namespace std;


class Base{
    int x;
public:
    Base(){}
    Base(int a):x{a}{}
    friend void set(Base&, int x);
    friend int get(Base&);  //For friend funtion
    friend class GetSet;    //For friend class
}; 

class GetSet{
    public:
    void set1(Base& obj,int x){obj.x=x;}
    int get1(Base& obj){return obj.x;}
};


void set(Base& obj,int x){obj.x=x;}
int get(Base& obj){return obj.x;}

int main(){
    Base b1;
    Base b2(10);
    set(b1,40);
    cout<<get(b1)<<endl;
    cout<<get(b2)<<endl;

    Base b3;
    GetSet g1;
    g1.set1(b3,20);
    cout<<g1.get1(b3)<<endl;
    return 0;
}

