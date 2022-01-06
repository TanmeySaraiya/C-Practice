//1. is astruct template a way to store two heterogenous objects as a single unit
//2. map,multimap, unorder_map, unorder_multimap can use pair to insert into their structures

#include<iostream>
#include<vector>

using namespace std;

void print(std::pair<int,int>& obj){ cout<< obj.first<<" "<<obj.second<<endl;}
int main(){ 
    {
        std::pair<int,int> obj(10,20);
        print(obj);
    }
    {
        std::pair<int,int> obj = std::make_pair(10,20);
        print(obj);
    }
    {
        std::vector<std::pair<std::string,unsigned int>> list1;
        list1.push_back(make_pair("Rupesh", 30));
        list1.push_back(make_pair("Hitesh", 28));
        list1.push_back(std::pair<std::string,int>("Bhupendra",22));
        list1.push_back(std::pair<std::string,int>("Sagar",18));
        for(auto &elm1: list1){
            cout<<elm1.first<<" "<<elm1.second<<endl;
        }
        
    }


    return 0;
}