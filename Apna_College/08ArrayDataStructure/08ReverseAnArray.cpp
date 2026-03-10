#include<iostream>
using namespace std;

   void reverseArray(int arr[], int sz){
    int start = 0, end = sz - 1;
    while (start < end){                 // odd ke case me <= laga dena
      swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
   }


int main(){
  // 2pointer approach


  int nums[] = {10, 20, -10, 30, 45};
  int sz = 5;

  reverseArray(nums, sz);

  for(int i=0; i<sz; i++){
    cout << nums[i] << " ";
  }
  cout << endl;

  
  return 0;
} 