
#include <iostream>
using namespace std;


class Point{
    int x;
    int y;
    public:
    Point(int a=0,int b=0):x{a},y{b}{}
    Point operator + (const Point& rhs){
        Point p;
        p.x=x+rhs.x;
        p.y=y+rhs.y;
        return p;
    }
    Point operator - (const Point& rhs){
        Point p;
        p.x=x-rhs.x;
        p.y=y-rhs.y;
        return p;
    }
    Point add(const Point& rhs){
        Point p;
        p.x=x+rhs.x;
        p.y=y+rhs.y;
        return p;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){ 
    Point p1(1,2), p2(3,4);
    Point p3=p1+p2;
    Point p4=p1-p2;
    Point p5=p1.add(p3);
    p3.print();
    p4.print();
    p5.print();
    return 0;
}
