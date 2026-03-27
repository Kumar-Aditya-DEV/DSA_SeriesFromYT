#include <iostream>
#include <vector>
using namespace std;

int main(){

  int b = 10;  
  // normal variable b jisme value 10 hai

  int* ptr = &b;   
  // ptr ek pointer hai jo b ka address store karta hai

  int** parentPtr = &ptr;      
  // parentPtr ek pointer hai jo ptr ka address store karta hai
  // 👉 yani pointer ka pointer

  cout << ptr << endl;              
  // ptr → b ka address print karega

  cout << &b << endl;             
  // &b → b ka address print karega
  // 👉 ptr aur &b same honge

  cout << &ptr << endl;          
  // &ptr → ptr ka address print karega

  cout << parentPtr << endl;    
  // parentPtr → ptr ka address store karta hai
  // 👉 isliye parentPtr aur &ptr same honge

  return 0;
}







// 🔥 Easy Trick yaad rakh
// Expression	Meaning
// p	          address of a
// *p	        value of a
// pp	        address of p
// *pp	        p
// **pp	      value of a