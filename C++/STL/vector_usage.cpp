
#include <iostream>
#include <vector>

using namespace std;



int main(){ 
    vector<int> Vec;
    for(int i=0;i<=32;i++){
        Vec.push_back(i);
        cout<<Vec.size()<<" "<<Vec.capacity()<< endl;

    }
    vector<int> vec2;
    vec2.reserve(1000); //Saves cost from copying
        for(int i=0;i<=32;i++){
        vec2.push_back(i);
        cout<<vec2.size()<<" "<<vec2.capacity()<< endl;

    }
    return 0;
}
