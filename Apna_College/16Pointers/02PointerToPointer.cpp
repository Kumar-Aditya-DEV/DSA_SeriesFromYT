#include <iostream>
#include <vector>
using namespace std;

int main(){

  int b = 10;
  int* ptr = &b;   
  
  int** parentPtr = &ptr;      // agar mere ko pointer ka address store karana hai tb mai ye likhunga

  cout << ptr << endl;              
  cout << &b << endl;             
  cout << &ptr << endl;          // same value 
  cout << parentPtr << endl;    // same value    
  return 0;
}