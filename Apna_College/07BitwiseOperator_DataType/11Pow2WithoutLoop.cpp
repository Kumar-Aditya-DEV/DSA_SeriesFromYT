#include<iostream>
using namespace std;

// Function check karega ki number power of 2 hai ya nahi
bool isPowerOfTwo(int n){

    // Condition:
    // 1. n > 0 hona chahiye (negative ya 0 power of 2 nahi hota)
    // 2. (n & (n-1)) == 0 hona chahiye

    // Explanation:
    // Power of 2 numbers ke binary form me sirf 1 hi '1' hota hai
    // Example:
    // 1  = 0001
    // 2  = 0010
    // 4  = 0100
    // 8  = 1000

    // Trick:
    // n & (n-1) → last set bit hata deta hai
    // Agar result 0 aata hai → matlab sirf ek hi '1' tha

    if(n > 0 && (n & (n-1)) == 0){
        return true;   // power of 2 hai
    }

    return false;      // power of 2 nahi hai
}

int main(){
    int n;
    cin >> n;  // user se input le rahe hain

    // function call karke check kar rahe hain
    if(isPowerOfTwo(n)){
        cout << "Power of 2";
    }else{
        cout << "Not power of 2";
    }
}