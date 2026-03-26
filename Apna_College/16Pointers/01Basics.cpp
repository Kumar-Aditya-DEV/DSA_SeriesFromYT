#include <iostream>
#include <vector>
using namespace std;

int main(){
  int a = 10;
  cout << &a << endl;         // ampersent(&) isme address hai 


  int b = 10;
  int* ptr = &b;           // same dataType ka pointer banega
  cout << ptr << endl;              // same value
  cout << &b << endl;               // same value 
  cout << &ptr << endl;           // ye ptr ka address hai



  float price = 100.22;
  float* ptr2 = &price;
  
  cout << ptr2 << endl;
  cout << &price << endl;
  cout << &ptr2 << endl;
  return 0;
}