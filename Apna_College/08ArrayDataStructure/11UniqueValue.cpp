#include<iostream>
using namespace std;

// Function unique elements print karega
void printUnique(int arr[], int size){

  for(int i=0; i < size; i++){
    
    int count = 0;  // count karega kitni baar element aaya

    // har element ko sabse compare karo
    for(int j=0; j < size; j++){   // ✅ j++ correct hai
      
      if(arr[i] == arr[j]){
        count++;   // match mila to count badhao
      }
    }

    // agar sirf 1 baar aaya → unique hai
    if(count == 1){
      cout << arr[i] << " ";
    }
  }
}

int main(){

  int arr[] = {1,2,2,3,4,4,5};
  int size = 7;

  printUnique(arr, size);

  return 0;
}