#include<iostream>
using namespace std;

int linearSearch(int arr[], int siz, int target){
  for(int i=0; i<siz; i++){
    if(arr[i] == target){
      return i;
    }
  }

  return -1;
}


int main(){
  int nums[] = {10, 20, -10, 30, 45};
  int siz = 5;
  int target = 30;

  cout << linearSearch(nums, siz, target) << endl;

 
  return 0;
} 