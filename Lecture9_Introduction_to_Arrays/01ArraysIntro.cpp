#include <iostream>
using namespace std;

// hold
void printArray(){

}

int main() {

    // declare
    int number[15];

    // accessing an array   or agar hamne koi value nii di hai then wo garbage value dega
    cout << "Value at 14 index" << number[14] << endl;

    // cout << "Value at 20 index" << number[20] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accessing an element
    cout << "Value at 2 index" << number[2] << endl;


    int third[15] =  {2,7};

    
    int n = 3;
    cout << " Print the array " << endl;
    // print the array
    for(int i = 0; i< n ;i++){
      cout << third[i]  << " ";
    }



    // initiallising all locations with 0
    int fourth[10] = {0};

    int n = 10;
    cout << " Print the array " << endl;
    // print the array
    for(int i = 0; i < n; i++){
      cout << fourth[i] << " ";
    }



    // initiallising all locations with 0
    int fourth[10] = {1};

    int n = 10;
    cout << " Print the array " << endl;
    // print the array
    for(int i = 0; i < n; i++){
      cout << fourth[i] << " ";
    }





    cout << endl << "Everything is fine " << endl << endl;

    return 0;
}
