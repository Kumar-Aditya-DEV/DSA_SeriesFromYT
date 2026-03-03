#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  cout << "Printing the array: ";
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

    int number[15];
    cout << "Value at 14 index: " << number[14] << endl; // garbage



    int second[3] = {5, 7, 11};
    cout << "Value at 2 index: " << second[2] << endl;



    int third[15] = {2,7};
    printArray(third,15);



    int fourth[10] = {3,4,5,6,7,8,9,11};
    printArray(fourth, 10);

    int fifth[11] = {1};
    printArray(fifth, 11);



    // ye nii samzha
    int sixth[11] = {1};
    printArray(sixth, 22 );          // yaha maine array ki size 22 rakhi hai
    int sixthSize = sizeof(sixth) / sizeof(int);
    cout << "size of sixth is " << sixthSize << endl; 



    
    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];


    cout << endl << " Everything is Fine " << endl << endl;
 

    return 0;
}
