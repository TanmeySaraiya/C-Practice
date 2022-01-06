
#include <iostream>
using namespace std;


struct Date{
    unsigned int d : 5;  //Only 5 bits needed to store daate
    unsigned int m : 4;  //Only 4 Bits are needed to store month
    unsigned int y;
};

int main(){ 
    Date d;
    d.d=18; d.m=11;d.y=1998;
    cout<<d.d<<"/"<<d.m<<"/"<<d.y<<endl;
    cout<<sizeof(Date)<<endl;

    return 0;
}

