#include<iostream>
#include<climits>
using namespace std;
int main(){
  // int nums[] = {10, 20, -10, 30, 45, 101};
  // int size = 6;

  // int smallest = INT_MAX;

  // for(int i=0; i<size; i++){
  //   if(nums[i] < smallest){
  //     smallest = nums[i];
  //   }
  // }

  // cout << "smallest = " << smallest << endl;



  int nums[] = {10, 20, -10, 30, 45, 101};
  int size = 6;

  int largest = INT_MIN;
  
  for(int i=0; i<size; i++){
    if(nums[i] > largest){
      largest = nums[i];
    }
  }

  cout << "largest  = "   << largest << endl;
  return 0;
} 