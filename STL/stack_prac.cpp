//1. Container adpater(takes existing cintainer and modifies it) for functionality of a stack
//2. Internally it uses std::deque STL container
//3. It is LIFO i.e allows push and pop from back

// Funtions provided
//empty() -Returns  if empty  O(1)
//size() - Returns size       O(1)  
//top() -Returns reference to topmost element O(1)
//push(g) -Adds elemement g at top of the stack O(1)
//pop() -Deletes the top most element of the stack O(1)

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

void print(stack<int,vector<int>> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(7);
    st.push(4);

    print(st);


    stack<int,vector<int>> st1; //Internally now it uses vector
    st1.push(2);
    st1.push(5);
    st1.push(7);
    st1.push(4);

    print(st1);

    

    return 0;
}