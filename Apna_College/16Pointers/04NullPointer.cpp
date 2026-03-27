#include <iostream>
using namespace std;

int main(){

  int** ptr;        
  // ptr ek pointer to pointer hai
  // lekin abhi isme koi value assign nahi hui
  // 👉 isme garbage value hogi (random address)

  cout << ptr << endl;  
  // ⚠️ garbage address print hoga (random number)

  ptr = NULL;      
  // ab ptr ko NULL assign kiya (means koi valid address nahi)

  cout << ptr << endl;
  // 👉 0 print hoga (NULL ka matlab zero address)

  return 0;
}