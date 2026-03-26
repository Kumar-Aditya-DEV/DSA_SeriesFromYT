#include <iostream>
#include <vector>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};

  cout << *arr << endl;  // 1
  cout << *(arr + 1) << endl;  // 2
  cout << *(arr + 2) << endl;  // 3
  cout << *(arr + 3) << endl;  // 4
  cout << *(arr + 4) << endl;  // 5



  // operation on pointer to pointer
  // isme hm ek pointer ki value ko dusri pointer ki value ke sath add nii kr sakte bht subtract kr sakte hai (for same data type)


  int* ptr2; // 100
  int* ptr1 = ptr2 + 2; // 108

  cout << ptr1 - ptr2 << endl;   // 2




  // also we compare 2 pointers 
  int* ptr3;
  int* ptr4;

  cout << ptr3 << endl;
  cout << ptr4 << endl;

  cout << (ptr3 < ptr4) << endl;
  cout << (ptr3 != ptr4) << endl;
  return 0;
}