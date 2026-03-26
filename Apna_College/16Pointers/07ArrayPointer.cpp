#include <iostream>
#include <vector>
using namespace std;

int main(){
  // array is our constant pointer -> jinki value change nii ho sakti
  int arr[] = {1,2,3,4,5};

  cout << arr << endl;    // pointer meory ka address milega mere ko vo bhi 0th idex ka memory

  cout << *arr << endl;  // 0th index ki value aaiegi 
  return 0;
}