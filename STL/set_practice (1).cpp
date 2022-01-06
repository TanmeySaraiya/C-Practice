
#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

class Person{
    public:
        float age;
        string name;
    bool operator <(const Person& rhs) const {return age<rhs.age;}
    bool operator >(const Person& rhs) const {return age>rhs.age;}
};

int main(){ 
    // set <int> Set={1,2,3,4,5,6,7,8,1,2,4,5,6};
    // for (const auto& e:Set){
    //     cout<<e<<endl;
    // }
    // std::set <int,std::greater<int>> Set2;
    // for(int i=1;i<=20;i++){
    //     Set2.insert(i);
    // }
    // for (const auto& e:Set2){
    //     cout<<e<<endl;
    // }
    set<Person> Set={{70,"Tanmey"},{10,"Akash"},{40,"Ram"}};
    for(const auto& e:Set){
        cout<<e.age<<" "<<e.name<<endl;
    }
    set<Person,std::greater<>> Set2={{70,"Tanmey"},{10,"Akash"},{40,"Ram"}};
    for(const auto& e:Set2){
        cout<<e.age<<" "<<e.name<<endl;
    }
    return 0;
}


