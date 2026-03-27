#include <iostream>
#include <vector>
using namespace std;

int main(){

  int a = 10;  
  // ek integer variable a banaya jisme value 10 hai

  cout << &a << endl;         
  // &a → yeh a ka memory address print karega
  // (matlab RAM me a kaha store hai)

  int b = 10;  
  // ek aur integer variable b banaya

  int* ptr = &b;           
  // ptr ek pointer hai jo int type ka hai
  // ptr me b ka address store kiya gaya hai

  cout << ptr << endl;              
  // ptr → yeh b ka address print karega

  cout << &b << endl;               
  // &b → yeh bhi b ka address print karega
  // 👉 isliye ptr aur &b ka output same hoga

  cout << &ptr << endl;           
  // &ptr → yeh pointer variable ka khud ka address hai
  // (ptr bhi ek variable hai, uska bhi address hota hai)

  float price = 100.22;  
  // ek float variable banaya

  float* ptr2 = &price;
  // ptr2 ek float pointer hai jo price ka address store karta hai

  cout << ptr2 << endl;
  // ptr2 → price ka address print karega

  cout << &price << endl;
  // &price → price ka address print karega
  // 👉 dono same honge

  cout << &ptr2 << endl;
  // &ptr2 → pointer ptr2 ka khud ka address print karega

  return 0;
}



// 🧠 Simple Example samajh:
// b = 10 → data
// &b = 0x123 → address
// ptr = 0x123 → pointer me address