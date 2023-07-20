#include <iostream>
#include <string>
using namespace std;
int main(){
    
    int num[3][3]={{0,1,2}, {3,4,5}, {6,7,8}};

     // Get size of array
    //  cout << sizeof(num)/sizeof(int);

    // Access an array elements
    //  cout << num[1][1];

     // change array element
     num[0][2]=3;

    // Access all array element
    
    for (int i = 0; i < 3; i++)  // for loop
    {
        for (int j = 0; j< 3; j++)
        {
            
                 cout << num[i][j] << "\n";
            
        }
          
    }

   

    return 0;
}