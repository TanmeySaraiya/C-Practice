// Fills range [first,last) with sequentially increasing values

#include<algorithm>
#include<iostream>
#include<list>
#include<numeric>
#include<vector>

using namespace std;

int main(){
    list<int> lst(10);
    iota(lst.begin(),lst.end(),0);

    for(auto elm:lst) cout<<elm<<endl;

    vector<list<int>::iterator> Vec(lst.size());

    for(auto elm:Vec){ cout<<*elm<<endl;}

    return 0;
}