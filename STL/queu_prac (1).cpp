//1. container adapter gives functionality of queue
//2. queu in FIFO 
//3. allows insertion at back and removal at front
//4. gives front, back, push, pop, empty, size

#include<iostream>
#include<queue>

using namespace std;

void print(queue<int> que) 
{
    while(!que.empty()){
        cout<<que.front()<<" ";
        que.pop();
    }
    cout<<endl;
}

int main(){
    std::queue<int> que;

    que.push(10);
    que.push(20);
    que.push(15);

    print(que);
    return 0;
}