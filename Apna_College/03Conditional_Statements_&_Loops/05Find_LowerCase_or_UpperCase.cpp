#include <iostream>
using namespace std;

int main()
{
  // char ch;
  // cout << "enter char : ";
  // cin >> ch;

  // if (ch >= 'a' && ch <= 'z'){
  //   cout << "LowerCase\n";
  // }
  // else{
  //   cout << "UpperCase\n";
  // }

  // another method
    char ch;
  cout << "enter char : ";
  cin >> ch;

  if (ch >= 65 && ch <= 90){
    cout << "UpperCase\n";
  }
  else{
    cout << "LowerCase\n";
  }
  return 0;
}