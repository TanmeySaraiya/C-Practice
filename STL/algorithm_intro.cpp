#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> Vec={1,3,5,6,7,1,4,6,8,2};
    vector<int>::iterator it=find(Vec.begin(),Vec.end(),9);

    if(it!=Vec.end()){
        cout<<"Found "<<*it<<endl;
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}