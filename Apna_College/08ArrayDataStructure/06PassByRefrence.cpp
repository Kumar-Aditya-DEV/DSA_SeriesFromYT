#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
  cout << "in function\n";
  for(int i=0; i<size; i++){
    arr[i] = 2 * arr[i];
  }
}



int main(){
  int nums[] = {1, 2, 3};

  changeArr(nums, 3);

  cout << "in main\n";
  for(int i=0; i<3; i++){
    cout << nums[i] << " ";
  }

  cout << endl;
  return 0;
} 



// pass by refrence me array ki main value ko chang kr diya 
// pass by value me copy banti hai or fir usme reflect hota hai value