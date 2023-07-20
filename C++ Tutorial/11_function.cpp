#include <iostream>
using namespace std;

// void msg(){
//     cout<< "Hello world";
// }

void add(int x, int y){
    cout << x+y;
}
// overloading
void add(int x, int y, int z){
    cout << x+y+z;
}

int main(){
    add(4,5);
    // add(45,30);

    // msg();
    // msg();

    return 0;
}