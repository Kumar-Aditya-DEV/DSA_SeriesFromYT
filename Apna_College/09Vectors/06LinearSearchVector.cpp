#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr, int target){
  for(int i=0; i<arr.size(); i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1;
}

int main(){
  vector<int> nums = {10, 20, 30, -10};
  int target = 20;

  cout << linearSearch(nums, target) << endl;
  return 0;
}