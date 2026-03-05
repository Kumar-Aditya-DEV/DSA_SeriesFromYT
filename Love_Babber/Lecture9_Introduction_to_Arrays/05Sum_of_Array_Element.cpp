#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    return sum;
}


int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];   // maximum 100 elements allowed

    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int total = getSum(arr, size);

    cout << "Sum of all elements is: " << total << endl;

    return 0;
}