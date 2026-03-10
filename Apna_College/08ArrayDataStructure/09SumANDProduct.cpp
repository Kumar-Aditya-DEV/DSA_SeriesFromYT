#include<iostream>
using namespace std;

void sumProduct(int arr[], int size){
  int sum = 0;
  int product = 1;

  for(int i=0; i<size; i++){
    sum += arr[i];
    product *= arr[i];
  }

  cout << "Sum = " << sum << endl;
  cout << "Product = " << product << endl;
}
int main(){

  return 0;
}