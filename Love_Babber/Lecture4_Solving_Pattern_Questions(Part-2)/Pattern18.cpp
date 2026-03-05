#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;  
    
    int row = 1;
    while (row <= n){
        
    // space print kr lo
    int space = n - row;
    while (space){
        cout << " ";
        space = space - 1;
    }

    // stars print kr lo
    int column = 1;
    while (column <= row){
        cout << "*";
        column = column + 1;
    }
    cout << endl;
    row = row + 1;

    }
    return 0;
}