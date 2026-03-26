#include <iostream>
#include <vector>
using namespace std;

int main(){

  // Incriment and decriment
  int a = 10;
  int *ptr = &a;

  cout << ptr << endl;
  ptr++;
  cout << ptr << endl;      // +4 
  cout << endl; 



  // add / Subtract Number
  int b = 10;
  int *ptr2 = &b;

  cout << ptr2 << endl;
  ptr2 = ptr2 + 2;
  cout << ptr << endl;      // +8
  return 0;
}