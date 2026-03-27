#include <iostream>
using namespace std;

int main(){

  // ---------------- ARRAY + POINTER ----------------
  int arr[] = {1,2,3,4,5};

  cout << *arr << endl;  
  // *arr → arr[0] → 1

  cout << *(arr + 1) << endl;  
  // arr + 1 → next element ka address → arr[1]
  // *(arr + 1) → 2

  cout << *(arr + 2) << endl;  
  // arr[2] → 3

  cout << *(arr + 3) << endl;  
  // arr[3] → 4

  cout << *(arr + 4) << endl;  
  // arr[4] → 5



  // ---------------- POINTER ARITHMETIC ----------------
  // NOTE: pointer + pointer ❌ allowed nahi hai
  // but pointer - pointer ✅ allowed hai (same type ke liye)

  int arr2[] = {10,20,30,40};
  int* ptr2 = arr2;        // arr2[0]
  int* ptr1 = ptr2 + 2;    // arr2[2]

  cout << ptr1 - ptr2 << endl;   
  // (ptr1 - ptr2) → number of elements ka difference
  // 👉 output: 2



  // ---------------- POINTER COMPARISON ----------------
  int* ptr3 = arr2;        // arr2[0]
  int* ptr4 = arr2 + 3;    // arr2[3]

  cout << ptr3 << endl;    
  // ptr3 → address of arr2[0]

  cout << ptr4 << endl;    
  // ptr4 → address of arr2[3]

  cout << (ptr3 < ptr4) << endl;
  // compare addresses → ptr3 pehle hai → true (1)

  cout << (ptr3 != ptr4) << endl;
  // dono alag address → true (1)

  return 0;
}