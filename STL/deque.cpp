//1. Indexed sequence container
//2. Allows fast insertion at both begining and end
//3. Unlinke vetor elements of deque are not stored contigous
//4. Uses individual allocated fixed size array, with additional bookeeping, 
//   meaning index based access to deque must perform two pointer difference, but in vector we get in one deference
//5. The storage of deque is automatically expanded and contracted as needed
//6. Expansion of deque is cheaper than that of vector
//7, A deque holding just one element has to allocate its full internal arry( eg 8 times the object size on 64 bit libstdc++; 
//   16 times the object size of 4096 bytes, whichever is larger, on 64-bit libc++)

//TIME COMPLEXITY
// Random Access - O(n)
// Insertion or removal of elements at the end or beginning - constant O(1)
// Insertion or removal of elements - linear O(n)

#include<iostream>
#include<deque>

using namespace std;

void print(deque<int> dpu){
    for(int num:dpu){ cout<<num<<" ";}
    cout<<endl;
}
int main(){
    {
        std::deque<int> dpu={2,3,4};
        dpu.push_front(1);
        dpu.push_back(5);
        print(dpu);
    }
    {
        std::deque<int> dpu={2,3,4};
        dpu.pop_front();
        dpu.pop_back();
        print(dpu);
    }
    return 0;
}