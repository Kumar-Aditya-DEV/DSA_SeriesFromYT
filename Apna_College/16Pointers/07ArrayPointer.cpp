#include <iostream>
using namespace std;

int main(){

  // array is like a constant pointer (address fix hota hai)
  int arr[] = {1,2,3,4,5};
  // arr internally point karta hai first element ko → &arr[0]

  cout << arr << endl;    
  // arr → base address deta hai (address of arr[0])
  // 👉 same as &arr[0]

  cout << *arr << endl;  
  // *arr → arr[0] ki value
  // 👉 output: 1

  return 0;
}