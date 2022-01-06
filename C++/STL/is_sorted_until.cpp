// Finds how many elements are sorted in given range[first,last)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> Vec{4,3,2,1,7,8,1};
    auto it= is_sorted_until(Vec.begin()+1,Vec.end(),greater<int>());
    auto diff=distance(Vec.begin()+1,it);
    cout<<diff<<'\n';
    return 0;
}