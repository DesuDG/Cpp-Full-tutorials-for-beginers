#include <iostream>
using namespace std;
int main()
{
//  Bitwise operator--> Operation in bit level

  // left shift    x<<y => x=x*2^y 
  int x=4; //0100
  int y=2; //0010
  // int z=x<<y; //4*2^2 = 4*4 = 16 = 10000
  // cout << z;

      //  Right shift    x>>y => x=x/2^y
  // int z=x>>y; //4/2^2 = 4/4 = 1 =  =0001
  //  cout <<z; 

      // bitwise &,|
  // & bit and       4=0100
  //                 2=0010
                   // =0000 = 0
  // | bit or        =0110=6
  
           int q=x&y; 
           int o=x|y;
  cout <<q <<"\n";
  cout <<o;
    return 0;
}
