#include<iostream>
using namespace std;
class Base{
    protected:
    int x;
    public:
    Base(){
        cout<<"parent constructor"<<endl;
    }
};

class Derived: public Base{
        void print(){
            cout<<x<<endl;
        }

        public:
        Derived(){
            cout<<"Derived Constructor"<<endl;


        }

};
int main(){
    Derived d;




    return 0;
}