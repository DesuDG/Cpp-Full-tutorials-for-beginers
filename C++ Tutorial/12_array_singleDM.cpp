#include <iostream>
#include <string>
using namespace std;
int main(){
    string programming[3]={"C++","java","Python"};
    int num[]={12,16,19,21};

     // Get size of array
    //  cout << sizeof(num)/sizeof(int);

    // Access an array elements
    //  cout << programming[0];

    // Access all array element

    // for (int i : num)    //for_each loop
    // {
    //   cout << i <<"\n";
    // }
    
    // for (int i = 0; i < 3; i++)  // for loop
    // {
    //     cout << programming[i] << "\n";
    // }

    // change array element
    num[1]=6;
    cout <<num[1];

   
    
    return 0;
}