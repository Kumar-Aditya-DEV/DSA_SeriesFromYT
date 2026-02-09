#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;  
    
    int row = 1;
    while (row <= n){
        int column = 1;
        while (column <= row){
            char ch = ('A' + row + column - 2);
            cout << ch;
            column++;
        } 
        cout << endl;
        row++;
    }
    return 0;
}
