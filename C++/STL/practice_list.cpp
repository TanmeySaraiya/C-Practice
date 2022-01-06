//1. Double Linked List in C programming language
//2. Sequence container that allow non-contigous memeory allocation
//3. Faster comapared to other sequence continers(vector,forward_list, deque) in terms of insertion, removal and moving elements in any position
//   provided we have the iterator of the position.
//4. Use this class instead of traditional doubly linked list a. Well developed b. Bunch of available function
//5. Available operations
//   operator =, assign , front, back,  empty, size,max_size, clear, insert, emplace, push_back, pop_back, push_front,
//   pop_front, reverse, sort, merge, splice, unique( works only on adjacent nodes, so sort first then use unique), remove, remove_if, resize

#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> list1 ={ 5,2,4,6,2};
    list<int> list2 ={7,6,1,9};
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);

    list1.splice(list1.begin(),list2);
     for(auto& elm :list1){
         cout<<elm<<' ';
     }
    cout<<endl;
    list2=list1;
    for(auto& elm: list2){
        cout<<elm<<' ';
    }
    cout<<endl;
    return 0;
}