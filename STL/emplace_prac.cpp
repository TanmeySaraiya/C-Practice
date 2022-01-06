//1. All the containers support insert and emplace operations to store data
//2. Emplace is used to construct object in-placeand avoids unecessary copy of objects
//3. Insert anf Emplace is equal foe primitive data types but when we deal with heavy objects we should use emplace if we are looking for efficincy

#include<iostream>
#include<set>
using namespace std;
class A{
    public:
    int x;
    A(int x=0):x{x}{cout<<"Construct"<<endl;}
    A(const A& rhs) {x=rhs.x;cout<<"Copy"<<endl;}

};

bool operator <(const A& lhs, const A& rhs){ return lhs.x<rhs.x;}

int main(){
    set<A> Set;
    cout<<"Insert Type"<<endl;
    Set.insert(A(1)); // does two operations i.e constuct and copy
    cout<<"Emplace Type"<<endl;
    Set.emplace(3);   // does one operation i.e constuct
    for(auto & eml: Set){
        cout<<eml.x<<endl;
    }
      
    return 0;
}