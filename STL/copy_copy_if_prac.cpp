// Copies element in the range, defined by [first,last) to another range beginning at d_first
// copt_if only copies of predicate returns true
// if source and destination are overlapping the behaviour is undefined

#include<algorithm>
#include<iostream>
#include<vector>
#include<iterator>
#include<numeric>

using namespace std;
void print(vector<int>& vec){
    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}

int main(){
    vector<int> from_vector(10);
    iota(from_vector.begin(),from_vector.end(),10);

    vector<int> to_vector(from_vector.size());
    copy(from_vector.begin(),from_vector.end(),to_vector.begin());
    print(to_vector);

    vector<int> to_vector2(from) 

}