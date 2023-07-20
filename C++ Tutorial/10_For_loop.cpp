#include <iostream>
using namespace std;
int main(){
int i=0, n, sum=0;
cout <<"Enter the value of n? ";
cin >> n;
    for( i=0; i<=n; i++)
       {
        sum+=i;// sum=sum+i;
       }
       cout <<"the sum of the first " << n <<" number is = " << sum;
       return 0;
    
}