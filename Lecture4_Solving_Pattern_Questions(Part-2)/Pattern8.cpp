#include<iostream>
using namespace std;
int main(){  
    // FIRST METHOD  
    // int n;
    // cout << "Enter your no. : " ;
    // cin >> n;

    // int row = 1;
    // while (row <= n){
    //     int column = 1;
    //     int value = row;
    //     while (column <= row){  
    //         cout << value << " ";
    //         value++;
    //         column = column + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;        
    // }
    




    // SECOND METHOD WITHOUT TAKING value VARIABLE
        int n;
    cout << "Enter your no. : " ;
    cin >> n;

    int row = 1;
    while (row <= n){
        int column = 1;
        while (column <= row){  
            cout << (row + column - 1) << " ";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;        
    }
    
    return 0;
} 
 