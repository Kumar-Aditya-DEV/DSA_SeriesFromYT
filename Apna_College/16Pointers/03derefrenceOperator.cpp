#include <iostream>
#include <vector>
using namespace std;

int main(){

  int a = 10;
  int* ptr = &a;

  int** parePtr = &ptr;

  cout <<  (ptr) << endl;             // same memory address
  cout << *(parePtr) << endl;         // same memory addres
  cout << **(parePtr) << endl;        // double derefrence ka output -> 10
 


  int b = 10;
  int* ptr1 = &b;        
             
  cout << *(&b) << endl;      //     uss address pr jo store value hai usko dega as an output    
  cout << *(ptr1) << endl;      //     same output  
  
  

         
  return 0;
}