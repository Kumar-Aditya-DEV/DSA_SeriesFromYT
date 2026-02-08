#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : " ;
    cin >> n;

    int row = 1;
    char start = 'A'; 
    while (row <= n){
        int column = 1;
        while (column <= n){  
            cout << start;
            start++;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;        
    }
    
    return 0;
} 
 