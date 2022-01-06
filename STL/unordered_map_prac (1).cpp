//0. Associative container that contians keys-value pairs with unique pairs
//1. Search, insertion and removal have avergae constant time compleixty
//2. Internally the elements are organized into buckets
//3. Uses hashing to insert elements
//4. This allows faster access to individual elements, because after computing the hash of the value it refers to the 
//    exact bucket where the element is stored

// USAGE - Maintian a collection of unique ke_value pairs with fast inertion and retrieval

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    std::unordered_map<int,char> umap={{1,'a'},{2,'b'}};

    cout<<umap[1]<<endl;
    cout<<umap[2]<<endl;

    umap[1]='c';

    for(auto& elm:umap){
        cout<<elm.first<<" "<<elm.second<<endl;
    }
    cout<<endl;

    auto result=umap.find(2);
    if(result!=umap.end()){
        cout<<"Found "<<result->first<<" "<<result->second<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}