#include <iostream>
#include <string>
using namespace std;

int main()
{
  string frout="Mango";
  string* ptr= &frout;

//   string *ptr= &frout;
//   string * ptr= &frout;

// change the values pointers
  *ptr="Apple";

  cout << frout <<"\n";
  cout << &frout <<"\n";
  cout <<ptr;

    return 0;
}
