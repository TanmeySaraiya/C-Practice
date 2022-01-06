//1. Sinlge linked list from the C programming language
//2. Use instead of Single Linked list because a. Well tested b. Bunch of available functions
//3. Few Available Operations
//  operator =, assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge, splice_after, unique, remove, remove_if, resize

#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> list1 ={5,4,6,2};
    forward_list<int> list2= {7,6,1,9};
    list1.reverse();
    for(auto & elm:list1){
        cout<<elm<<endl;
    }
    list1.sort();
    list2.sort();

    list1.merge(list2);
    for(auto & elm:list1){
        cout<<elm<<endl;
    }

    list1.splice_after(list1.begin(),list2); // insert after first position this will make list 2 empty

    list1.remove_if([] (int n){
        return n;
    });
    return 0;
}