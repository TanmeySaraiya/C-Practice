
#include <iostream>


using namespace std;

class Circle{
    const float pi=3.14;  //Initialize inside class
    float r;
    public:
    Circle(float a):r{a}{}
    float Area(){
        return r*r*pi;
    }
};

class Phone{
    const string pname;
    int memsize;
    public:
    Phone(string nam,int a):pname{nam},memsize{memsize}{} //Initialize inside initializer list
    string getPhoneName(){return pname;}
};



int main(){
    Circle c1(5.4);
    cout<<c1.Area()<<endl;
    Phone p1("Moto G4",32);
    cout<<p1.getPhoneName()<<endl;
    return 0;
}

