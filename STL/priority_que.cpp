//1. Container adaptor that provides constant time lookup for the lrgest/ smallest element
//2. By default vector is used inside
//3.Cost of insertion and deletion is logarithmic
//4. implemented using functions std::make_heap, std::push_heap, std::pop_heap


#include<functional>
#include<queue>
#include<vector>
#include<iostream>

template<typename T> void print_queue(T& q){
    while(!q.empty()){
        std::cout<<q.top()<<" ";
        q.pop();
    }
    std::cout<<std::endl;
}

int main(){
    {
        std::priority_queue<int> q;
        for(int elm:{1,8,5,4,0,9,7,2}) {q.push(elm);}
        print_queue(q);
    }
    {
        std::priority_queue<int, std::vector<int>, std::greater<int>> q2;
        for(int elm:{1,8,6,3,4,0,9,7,2}){q2.push(elm);}
        print_queue(q2);    
    }
    {
        auto cmp= [](int left,int right){return (left)<(right);};
        std::priority_queue<int,std::vector<int>, decltype(cmp)> q3(cmp);

        for(int elm:{1,8,5,6,3,4,0,9,7,2}){ q3.push(elm);}
        print_queue(q3);
    }  


    return 0;
}