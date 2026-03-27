#include <iostream>
#include <vector>
using namespace std;

int main(){

  int a = 10;
  // normal variable a = 10

  int* ptr = &a;
  // ptr me a ka address store hai

  int** parePtr = &ptr;
  // parePtr me ptr ka address store hai (pointer to pointer)

  cout << (ptr) << endl;             
  // ptr → a ka address print karega

  cout << *(parePtr) << endl;         
  // *parePtr → ptr ki value
  // ptr ki value = a ka address
  // 👉 to ye bhi a ka address print karega

  cout << **(parePtr) << endl;        
  // **parePtr → a ki actual value
  // 👉 output = 10


  int b = 10;
  // new variable b

  int* ptr1 = &b;        
  // ptr1 me b ka address

  cout << *(&b) << endl;      
  // &b → b ka address
  // *(&b) → us address pe jo value hai → b
  // 👉 output = 10

  cout << *(ptr1) << endl;      
  // ptr1 → b ka address
  // *ptr1 → b ki value
  // 👉 output = 10

  return 0;
}