
#include <iostream>
using namespace std;

// Eaxampl 1 
/*union Square{
    int width;
    int height;
}; 

int getArea(int width, int height){
    return width*height;

}
int main(){
    Square sqr;
    sqr.width=10;
    cout<<getArea(sqr.width,sqr.height);
    return 0;
}
*/


union myUnion{
    char bytes[4];
    unsigned int value;
};

int main(){
    myUnion un;
    un.value=0;
    un.value=257;

    cout<< (int)un.bytes[0] <<endl;
    cout<< (int)un.bytes[1] <<endl;
    cout<< (int)un.bytes[2] <<endl;
    cout<< (int)un.bytes[3] <<endl;
    //Read value byte by byte.  257 means 1 in first byte and 1 in second byte
    return 0;
}

