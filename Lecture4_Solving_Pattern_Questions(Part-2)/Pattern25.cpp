#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;  
    
    int row = 1;
    while (row <= n){

    // Print first triangle
    int space = n - row;
    while (space){
        cout << " ";
        space = space - 1;
    }


    // Print second triangle
    int column = 1;
    while (column <=  row){
        cout << column;
        column = column + 1;
    }


    // Print third triangle
    int start = row - 1;
    while (start){
        cout << start;
        start = start - 1;
    }


    cout << endl;
    row = row + 1;
    }
    return 0;
}