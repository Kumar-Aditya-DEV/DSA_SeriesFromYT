#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;  
    
    int row = 1;
    while (row <= n){

    // space print kr lo
    int space = row - 1;
    while (space){
        cout << " ";
        space = space - 1;
    }





    int star = n - row + 1; 
    int column = 1;
    while (column <=  star){
        cout << row;
        column = column + 1;
    }
    cout << endl;
    row = row + 1;

    }
    return 0;
}