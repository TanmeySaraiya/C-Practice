#include <iostream>

using namespace std;
class Base{
    int x;
    public:
    Base(int x=0):x{x}{}
    friend class Test;
};
class Test{
    int *x;
public:
    Test(int val=0):x{new int(val)}{}
    void setX(int val){*x =val;}
    void print(){cout<<"OUTPUT "<<*x<<endl; }
    ~Test(){delete x;}
    Test& operator =(Test& rhs){
        if (this!=&rhs){
            *x=*rhs.x;   //To avoid self assignment
        }
        return *this;    //Return this for chain assignment
    }
    Test& operator =(Base& rhs){
        *x=rhs.x;
        return *this;
    }
    Test(const Test& rhs){
        x=new int(*rhs.x);
    }
};

int main(){
    Test t1(10);
    Base b1(20);
    t1=b1;
    t1.print();
    Test t2,t3;
    (t2=t3)=t1;
    t1.print();
    t2.print();
    t3.print();
    return 0;
}