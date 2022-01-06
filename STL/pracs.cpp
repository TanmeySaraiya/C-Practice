#include <iostream>
#include<sstream>

using namespace std;

    int myAtoi(string str) {
        
        if (!str.length()) return 0;
        
        istringstream ss(str);
        int val = 0;
        
        ss >> val;
        
        return val;
    }

int main(){
    string s="-414214141141414414";
    cout<<myAtoi(s)<<endl;
    cout<<INT_MIN;
    return 0;
}