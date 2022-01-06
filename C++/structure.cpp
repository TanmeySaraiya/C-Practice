
#include <iostream>
using namespace std;


class Base1{
    int x;
};

struct Base2{
    int x;
};
int main(){
    Base1 b1;
    b1.x=10; // Not allowed as Class by default is Private
    Base2 b2;
    b2.x=10; // Allowed as Structure by default in public
    return 0;
}

