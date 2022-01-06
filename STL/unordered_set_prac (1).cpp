//1.Associative container that contains set of unique objects
//2. Search, insertion and removal have average constant time complexity
//3. Internally objects are organized into objects
//4. Uses hashing to insert elements into objects
//5. Allows fast access to individual elements, sice once a hash is computed, it refers
//   to exact bucket the element is placed into

// Usage - Maintain a collection of unique items with fast insertion and retrieval

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    std::unordered_set<int> uset ={4,1,2,3,2,4,5};

    auto search=uset.find(2);
    if(search!=uset.end()){
        std::cout<<"Found " <<(*search)<<endl;
    }
    else 
    {
        cout<<"Not Found"<<endl;
    }
    for(auto& elm:uset){
        cout<<elm<<" ";
    }
    cout<<endl;

    return 0;
}