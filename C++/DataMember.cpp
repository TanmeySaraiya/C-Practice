
#include <iostream>


using namespace std;

class Point{
    public:
        int x,y;
        Point(int a,int b):x{a},y{b}{}
        void print(){
            cout<<x<<" "<<y<<endl;
        }
};



int main(){
    Point p1(1,1),p2(1,2);
    p1.print();
    p2.print();
    return 0;
}

