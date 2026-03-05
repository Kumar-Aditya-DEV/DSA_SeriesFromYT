#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;  
    
    cout << "printing count from 1 to n" << endl;


/*
    // for(int i = 0;i <= n; i++){
    //     cout << i << endl;
    // }
*/



/*
    // int i = 0;
    // for(;i <= n; i++){
    //     cout << i << endl;
    // }
*/



/*
    int i = 0;
    for(;i <= n; ){
        cout << i << endl;
        i++;
    }
*/


/*
    int i = 0;
    for(; ; ){
        if(i <= n){
            cout << i << endl;
        }
        else{
            break;
        }
        
        i++;
    }
    */


    for(int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--,b--, c--){
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}