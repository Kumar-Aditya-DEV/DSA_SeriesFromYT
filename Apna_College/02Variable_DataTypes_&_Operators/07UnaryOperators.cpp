#include<iostream>
using namespace std;
int main(){
  int a = 10;

  // INCRIMENT 
  int b = a++;  //first kaam : update
  int b = ++a;  //first update : kaam
  cout << b << endl; 
  cout << a << endl; 

  // DECREMENT
  int b = a--;  //first kaam : update
  int b = --a;  //first update : kaam
  cout << b << endl;  
  cout << a << endl;  
  return 0; 
}