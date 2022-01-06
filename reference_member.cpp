
#include <iostream>
using namespace std;


class Base{
    int& x;
    public:
    Base(int& a):x{a}{}            // Reference member can only be used in initializer list. Also pass to argument as reference.
    void print(){
        cout<<x<<endl;
    }

};



int main(){
    int t=30;
    Base b1(t);

    return 0;
}

