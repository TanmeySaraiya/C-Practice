#include <algorithm> 
#include <chrono> 
#include <iostream> 
#include<vector> 
using namespace std; 
using namespace std::chrono; 
int main(){
    auto start = high_resolution_clock::now();
    int a=5;
    int b=6;
    int c=a+b;
    auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl; 
  
    return 0;
}