#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;  
    
    int row = 1;   
    while (row <= n){
        int column = 1;
        char start = 'A' + n - row;
        while (column <= row){
            cout << start;
            start+=1;
            column++;
        } 
        cout << endl;
        row++;
    }
    return 0;
}