#include <iostream>
using namespace std;

int main(){

  // ---------------- INCREMENT / DECREMENT ----------------
  int a = 10;
  int *ptr = &a;

  cout << ptr << endl;
  // ptr → a ka address

  ptr++;
  // ptr next memory location pe move karega
  // 👉 int size = 4 bytes → address +4 hoga

  cout << ptr << endl;      
  // previous address + 4

  cout << endl; 



  // ---------------- ADD / SUBTRACT ----------------
  int b = 10;
  int *ptr2 = &b;

  cout << ptr2 << endl;
  // ptr2 → b ka address

  ptr2 = ptr2 + 2;
  // ptr2 2 positions aage move karega
  // 👉 2 * sizeof(int) = 2 * 4 = +8 bytes

  cout << ptr2 << endl;      
  // previous address + 8

  return 0;
}