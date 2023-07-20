#include <iostream>
using namespace std;

int main(){
    // if else statements
    float result;
    cout <<"insert your result?";
    cin >> result;
    if (result<50){
        cout <<"D";
    }
    else if(result>=50 && result<=70){
        cout <<"C";
    }
    else if(result>70 && result<=80){
        cout <<"B";
    }
    else{cout << "A";
    }
    return 0;
}