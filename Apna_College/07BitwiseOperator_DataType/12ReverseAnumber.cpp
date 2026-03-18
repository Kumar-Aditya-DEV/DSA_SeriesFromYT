#include<iostream>
using namespace std;

// Function number ko reverse karega
int reverseNumber(int n){
    
    int rev = 0;  // reversed number store karega

    // jab tak number 0 nahi ho jata
    while(n != 0){
        
        int digit = n % 10;        // last digit nikalte hain
        rev = rev * 10 + digit;    // reverse me add karte hain
        n = n / 10;                // last digit remove karte hain
    }

    return rev; // final reversed number
}

int main(){
    int n;
    cin >> n;  // user input

    cout << reverseNumber(n); // reversed number print
}