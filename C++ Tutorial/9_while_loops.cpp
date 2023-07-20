#include <iostream>
using namespace std;


int main(){
int i=0, n, sum=0;
cout <<"Enter the value of n? ";
cin >> n;
// while(i<=n){
//      sum+=i;// sum=sum+i;
//     i++; //i+1;
//     // cout <<i <<"\n";
// }
//  cout <<"the sum of the first " << n <<" number is = " << sum;

do{
    sum+=i;
    i++;
}while(i<=n);
cout <<sum <<"\n";
    return 0;
}