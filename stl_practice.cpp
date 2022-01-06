
#include <iostream>
#include <string.h>

using namespace std;

void print(int times){
    if(times!=0){
        cout<<"C++"<<times<<endl;
        times--;
        print(times);
        cout<<"Reverse"<<times<<endl;
    }


}
int main(){
    int times=3;
    print(times);
    return 0;
}

