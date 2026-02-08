#include<iostream>
using namespace std;
int main(){    
    int n;
    cout << "Enter your no. : " ;
    cin >> n;

    int row = 1;
    int ptrn = 1;
    while (row <= n){
        int column = 1;
        while (column <= row){
            cout << ptrn << " ";
            ptrn++;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;        
    }
    
    
    return 0;
} 
 