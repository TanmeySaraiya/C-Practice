//1. Check if elements in range ]first,last] are sorted in non-descending(default) order

//TYPES:
//1. Sorting integral data types
//2. Sorting using user definded datatypes
//3. sorting using function object
//4. Sort using lambda expression

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> Vec{ 5,4,7,3,2,8,9,1};
    sort(Vec.begin(),Vec.end(),greater<int>());
    for(auto elm:Vec){
        cout<<elm<<" ";
    }

    cout<<endl<<is_sorted(Vec.begin(),Vec.end(),greater<int>());

    return 0;
}