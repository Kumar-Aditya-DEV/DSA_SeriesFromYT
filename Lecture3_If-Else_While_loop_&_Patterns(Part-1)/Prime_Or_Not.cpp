#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter your no. : " ;
    // cin >> n;

    // for(int i = 2; i <= n - 1;i++){
    //     if(n % i == 0){
    //         cout << "The no. is not prime" << endl;
    //         return 0;
    //     } 
    // }
    // cout << "The no. is prime" << endl;




    int n;
    cout << "Enter your no. : " ;
    cin >> n;

    int i = 2;
    while (i < n){
        if(n % i == 0){
            cout << "Not prime for " << i << endl;
            return 0;
        }
        else{
            cout << "Prime for " << i << endl;
            return 0;
        }
        i = i + 1;
    }
    return 0;
} 
