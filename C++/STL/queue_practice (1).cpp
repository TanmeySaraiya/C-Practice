
#include <iostream>
using namespace std;


class Point{
    int arr[2];
    public:
    Point(int a=0,int b=0){
        arr[0]=a;
        arr[1]=b;
    }
    int& operator [](int pos){
        if(pos==0){
            return arr[0];
        }
        else if(pos==1){
            return arr[1];
        }
        else{
            cout<<"Out of Bounds"<<endl;
            exit(0);
        }
    }
    void print(){
        cout<<arr[0]<<endl;
        cout<<arr[1]<<endl;
    }

};

int main(){ 
    Point p1(3,4);
    p1.print();
    p1[0]=7;
    p1[1]=8;
    p1.print();

    return 0;
}
