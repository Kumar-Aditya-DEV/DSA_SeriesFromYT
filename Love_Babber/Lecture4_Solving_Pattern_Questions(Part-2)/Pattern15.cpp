#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;

    char letter = 'A';  
    
    int row = 1;
    while (row <= n){
        int column = 1;
        while (column <= row){
            cout << letter;  
            letter++;        
            column++;
        } 
        cout << endl;
        row++;
    }
    return 0;
}
