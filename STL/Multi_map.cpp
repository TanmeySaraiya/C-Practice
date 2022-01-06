// SYNTAX : mult/impa<T1,T2> obj;

//1. Assocaiative container contains sorted list of key value pairs while permitting entry with single key
//2. It store key value pair ascending or descending order
//3. Datsrtucture  used in multimap is not defined by standard, but red black tree is assumed
//4. Lookup : count, find, contins, equal_range, lower_bound, upper_bound
//5. Doesn't have at() and [] functions to get elements

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    std::multimap<char,int> multiMap;
    multiMap.insert(make_pair('a',1));
    multiMap.insert(pair<char,int>('a',2));
    multiMap.insert(make_pair('a',3));
    multiMap.insert(make_pair('b',4));
    multiMap.insert(make_pair('b',5));

    for(auto& elm:multiMap){
        cout<<elm.first<<" "<<elm.second<<endl;
    }
    cout<<endl;
    //Get all the pairs of given key
    pair<multimap<char,int>::iterator,multimap<char,int>::iterator> range=multiMap.equal_range('a');
    for(auto it=range.first;it!=range.second;++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    auto pa=multiMap.find('a');
    cout<<pa->first<<" "<<pa->second<<endl;

    

    return 0;
}