#include<iostream>
using namespace std;

void printUnique(int arr1[], int size1, int arr2[], int size2){
  for(int i=0; i < size1; i++){
  

    for(int j=0; j < size2; j++){
      if(arr1[i] == arr2[j]){
        cout << arr1[i] << " ";
        break;
    }
  }
}
}



int main(){
  int arr1[] = {1,2,2,3,4,4,5};
  int arr2[] = {7,3,4,6};

  int size1 = 7;
  int size2 = 4;

  printUnique(arr1, size1, arr2, size2);
  return 0;
}