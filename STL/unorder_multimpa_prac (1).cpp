// 0. Associative container supports equivalent keys (an unordered_multimap may contain multiple copies of each key) 
// 1. Search, inserion and removal have average constant time complexity
// 3. Internally yhe elements are organized into buckets
// 4. Uses hashing
// 5. Allows fast access to individual elements since hash is computed

//USAGE - Maintain a collection of duplicate key-value pairs with fast insertion and removal.

#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    std::unordered_multimap<int,char> umm={{5,'d'}};
    umm.insert({1,'a'});
    umm.insert(std::pair<int,char>(5,'b'));
    umm.insert(make_pair(3,'t'));
    umm.insert(make_pair(8,'p'));

    for(auto& e:umm){
        cout<<e.first<<" "<<e.second<<endl;
    }
    return 0;
}