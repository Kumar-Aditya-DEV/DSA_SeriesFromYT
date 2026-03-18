#include<iostream>
using namespace std;

// Function to convert Binary to Decimal
int BinaryToDecimal(int binNum) {

    int ans = 0;   // final decimal number store karega
    int pow = 1;   // power of 2 (1, 2, 4, 8, ...)

    // jab tak binary number khatam nahi hota
    while(binNum > 0) {

        int rem = binNum % 10;   // last digit nikalte hain (0 ya 1)
        
        ans += (rem * pow);      // digit * power of 2 add karte hain

        binNum /= 10;            // last digit hata dete hain
        pow *= 2;                // next power of 2 (double ho jata hai)
    }

    return ans; // decimal form return karega
}

int main() {

    // binary 1010 ko decimal me convert karega
    cout << BinaryToDecimal(1010) << endl;

    return 0;
}