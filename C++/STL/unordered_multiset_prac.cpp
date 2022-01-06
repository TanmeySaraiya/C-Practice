// 1. Associative container that contains set of possibly no_unique elements
// 2. Search, insertion and removal have average constant time complexity
// 3. INternally elements are organized into buckets
// 4. Uses hashing to insert elements into buckets
// 5. Allows fast access to individual elements, because after computing the hash of the value it refers to the 
//    exact bucket the element is placed into

// USAGE -  Maintain a collection of non-uniqe items with fast insertion and removal

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    std::unordered_multiset<int> umset={4,1,2,3,9,4,3,2,9,8,10};
    auto search=umset.find(2);
    if(search!=umset.end()){
        cout<<"Found "<<*search<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    for(auto& e:umset){
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<umset.count(4)<<endl;
    return 0;

}