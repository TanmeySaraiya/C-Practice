#include<iostream>

using namespace std;
double dollar_to_rupee_exchg(){
    return 75.55;
}
class Rupee{
    double rupee;
public:
    Rupee(double d=0):rupee{d} {}
    void print(){cout<<rupee<<endl;}
    operator Dollar(){
        return Dollar(rupee/dollar_to_rupee_exchg());
    }
};

class Dollar{
    double dollar;
public:
    Dollar(double d=0):dollar{d} {}
    operator Rupee(){
        return Rupee(dollar*dollar_to_rupee_exchg());
    }
    void print(){cout<<dollar<<endl;}
};

int main(){
    Dollar d1(10);
    Rupee r1;
    r1=d1;
    Dollar d2;
    d2=r1;
    r1.print();
    d1.print();
    d2.print();
    return 0;
}