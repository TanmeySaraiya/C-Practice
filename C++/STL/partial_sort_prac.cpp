//1. rearranges elements such that range[first,middle) contains the sorted elements.
//2. The order of equal elements is not guranteed to be prsereved
//3. Order of remaining elements is unspeciffied

#include<algorithm>
#include<functional>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> Vec{1,0,7,4,2,8,6,5,9,3};
    //std::partial_sort(Vec.begin(),Vec.begin()+4,Vec.end());
    std::partial_sort(Vec.begin()+1,Vec.begin()+4,Vec.end()-1,greater<int>());
    for(int& val:Vec){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}