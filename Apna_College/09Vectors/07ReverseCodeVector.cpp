#include<iostream>
#include<vector>
using namespace std;

int reverseCode(vector<int> arr){
  int start = 0;
  int end = arr.size() - 1;

  while (start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}


int main(){
  vector<int> nums = {10,20,30,40, -10};

  reverseCode(nums);
}