#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n > 0 && (n & (n-1)) == 0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    if(isPowerOfTwo(n)){
        cout << "Power of 2";
    }else{
        cout << "Not power of 2";
    }
}