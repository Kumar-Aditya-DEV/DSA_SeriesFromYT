#include<iostream>
using namespace std;
int main(){

  // size taking input in array
  int size = 5;
  int marks[size];

  // input ki value yaha pr 
  for(int i=0; i<size; i++){
    cin >> marks[i];
  }

  // yaha se input ki value ko print karo
  for(int i=0; i<size; i++){
    cout << marks[i] << endl;
  }
  
  return 0;
}
