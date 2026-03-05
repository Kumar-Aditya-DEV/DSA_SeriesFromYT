#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
  for(int i = 0; i < size; i++){
    if(arr[i] == key){
      return 1;
    }
  }
  return 0;
}

int main(){

  int arr[10] = {5, 11,  7, -2, 10, 9, 3, 65, 0, 1};

  //weather 1 is present in it or not ?
  cout << " Enter the element to search for " << endl;
  int key;
  cin >> key;

  bool found = search(arr, 10, key);

  if(found){
    cout << " Key is present " << endl;
  }
  else{
    cout << " key is not present " << endl;
  }


  return 0;
}