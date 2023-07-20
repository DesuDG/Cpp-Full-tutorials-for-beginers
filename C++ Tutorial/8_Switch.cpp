#include <iostream>
using namespace std;

int main() {
    float x=6, y=4;
  char ope;
  cout << "Enter your operator? ";
  cin >>ope;
  switch (ope) {
  case '+':
    cout << x+y;
    break;
  case '-':
    cout << x-y;
    break;
  case '*':
    cout << x*y;
    break;
  case '/':
    cout << x/y;
    break;
  
  }
  return 0;
}
