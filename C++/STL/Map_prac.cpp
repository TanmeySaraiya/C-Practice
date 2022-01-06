//1. Synatx : map<T1,T2> obj T1->key , T2->value
//2. map is an associtive container thta stores elements in key value pairs
//3. Its is implemented using Self-Balance Binary Tree (AVL, Red Black Tree)
//4. It store key value pair in sorted order on the basis of key (asscending/decending)
//5. Generally used in Dictionary type problem
//6. Cannot change KEy once entered

#include<iostream>
#include<map>
#include<functional>
#include<vector>

using namespace std;

int main(){
    std:: map<string, vector<int>,std::greater<string>> Map;
    Map["Chotu"].push_back(90909009);
    Map["Amit"].push_back(98131324);
    Map["Amit"].push_back(98131356);
    //Map.insert(std::make_pair("Bot",792214123));
    for(auto &el1:Map){
        cout<<el1.first;
        for(auto &el2:el1.second){
            cout<<el2<<endl;
        }
    }

    return 0;
}

