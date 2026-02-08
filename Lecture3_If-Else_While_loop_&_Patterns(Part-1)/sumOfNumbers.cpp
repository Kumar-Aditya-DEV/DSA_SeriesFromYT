#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the value : " ;
    // cin >> n;

    // int i = 1;
    // int sum = 0;

    // while (i <= n){
    //     sum = sum + i;
    //     i = i + 1;
    // }

    // cout << "value of sum is" << sum << endl;



    int n;
    cout << "Enter the value : " ;
    cin >> n;

    int i = 2;
    int sum = 0;

    while (i <= n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i = i + 1;
        
    }
    cout << "value of sum is : " << sum << endl;
    return 0;
} 
