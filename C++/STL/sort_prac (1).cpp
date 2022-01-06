// 1. Sort in increasing or decreasing order
// 2. user definded data can also be sorted using this function
// 3. Internally it uses IntroSort which is combination of QuickSort, HeapSort and InsertionSort
// 4. BY default uses Quicksort but if Quicksort does unfair partitioning ans taking more than nlogn time,
//    then shifts to HeapSort and when the array size becomes really small, it switches to Insertion Sort
// 5. Use parallel execution policy for better performance

//TYPES:
//1. Sorting integral data types
//2. Sorting using user definded datatypes
//3. sorting using function object
//4. Sort using lambda expression

#include<iostream>
#include<algorithm>
#include<vector>
//#include<execution>

using namespace std;


// 1. Sorting integral data types
int main(){
    vector<int> Vec{5,4,3,1,5,2,4,5};
    std::sort(std::execution::par,Vec.begin(),Vec.end());
    int a[] = {0,1};
        std::vector<int> v;
        std::for_each(std::execution::par, std::begin(a), std::end(a), [&](int i) {
  v.push_back(i*2+1); // Error: data race
});
    return 0;
}


//2. Sorting using user definded datatypes
// class Point{
//    public:
//       int x;
//       int y;
//    Point(int x=0, int y=0):x{x},y{y} {}
//    bool operator <(const Point& p1){
//       return (x+y)<(p1.x+p1.y);
//    }
// };

// int main(){
//    vector<Point> Vec{{1,2},{3,1},{0,1}};
//    sort(Vec.begin(),Vec.end());
//    for(auto e: Vec){
//       cout<<e.x<<" "<<e.y<<endl;
//    }
//    return 0;
// }


//3. sorting using function object
// struct{
//    bool operator()(int a,int b) const
//    {
//       return a<b;
//    }
// } customLess;

// int main(){

//    vector<int> Vec{5,4,6,7,3,2,8,9,1};
//    sort(Vec.begin(),Vec.end(),customLess);
//    return 0;
// }

//4. Sort using lambda expression
// int main(){
//    vector<int> Vec{5,4,6,7,3,2,8,9,1};
//    sort(Vec.begin(),Vec.end(),[] (int a, int b) {return a<b;});
//    for(auto& elm:Vec){
//       cout<<elm<<" ";
//    }

//    return 0;
// }

// Desceneing order

// int main(){
//    vector<int> Vec{5,4,6,7,3,2,8,9,1};
//    sort(Vec.begin(),Vec.end(),greater<int>());
//    for(auto& elm:Vec){
//       cout<<elm<<" ";
//    }

//    return 0;
// }





















// #include<iostream>
// using namespace std;
// int main() {
//    if (__cplusplus == 201703L)
//       std::cout << "C++17" << endl;
//    else if (__cplusplus == 201402L)
//       std::cout << "C++14" << endl;
//    else if (__cplusplus == 201103L)
//       std::cout << "C++11" << endl;
//    else if (__cplusplus == 199711L)
//       std::cout << "C++98" << endl;
//    else
//       std::cout << "pre-standard C++" << endl;
// }