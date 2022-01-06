//1. nth element is partial sorting algorithm that rearranges elements in [first,last) 
//  a. element at nth position is the one which should be at that position if we sort the list
//  b. It soes not sort list, just all elements which precede the nth element are not greater than it, and all elements after it are not less than it
//2. nth_elementis implement using introselect
//  a. quickselect is used to find the kth smallest number in an unsorted array
// b. median of medians is a median selection algorithm for better pivot selection mainly used in quickkselect

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    vector<int> v{5,4,3,2,6,7,9,3};
    nth_element(v.begin(),v.begin()+v.size()/2,v.end()); //Looking for median
    cout<<"The median is "<<v[v.size()/2]<<endl;

    nth_element(v.begin(),v.begin()+1,v.end(),greater<int>());
    cout<<"The second largest element is "<<v[1]<<endl;
    return 0;
}
