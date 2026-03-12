#include<iostream>
using namespace std;
int main(){

  // method 1 -> when size is already given 
   
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





  // method 2 -> take size and marks both as input

    int size;
    cin >> size;
    
    int marks[size];
    for(int i=0; i<size; i++){
        cin >> marks[i];
    }
    
    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    }
  
  return 0;
}
