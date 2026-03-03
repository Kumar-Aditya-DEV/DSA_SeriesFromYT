#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int num[], int n){
  int maxi = INT_MIN;
  for(int i = 0; i < n; i++){
    // if(num[i] > maxi){
    //   maxi = num[i];
    // }

    maxi = max(maxi, num[i]);
  }

  // return the max value
  return maxi;
}

int getMin(int num[], int n){
  int mini = INT_MAX;
  for(int i = 0; i < n; i++){
    // if(num[i] < mini){
    //   mini = num[i];
    // }

    mini = min(mini, num[i]);
  }

  // return the min value
  return mini;
}

int main() {

  int size;
  cout << "Enter the size: ";
  cin >> size;

  if(size > 100){
    cout << "Size should be <= 100";
    return 0;
  }

  int num[100];

  // taking input in array  -> aise input lena hai
  cout << "Enter the value according to given size: ";
  for(int i = 0; i < size; i++){
    cin >> num[i];
  }

  cout << "Maximum element is: " << getMax(num, size) << endl;
  cout << "Minimum element is: " << getMin(num, size) << endl;

  return 0;
}
