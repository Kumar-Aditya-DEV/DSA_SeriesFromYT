#include<iostream>
using namespace std;

// Function to convert Decimal to Binary
int decToBinary(int decNum) {
    
    int ans = 0;   // final binary number store karega
    int pow = 1;   // place value (1, 10, 100, ...)

    // jab tak decimal number 0 nahi hota
    while(decNum > 0) {
        
        int rem = decNum % 2;   // remainder (0 ya 1) → binary digit
        decNum /= 2;            // number ko 2 se divide kar rahe

        ans += (rem * pow);     // remainder ko correct position pe add karna
        pow *= 10;              // next position (10, 100, 1000...)
    }

    return ans; // binary form return karega (integer format me)
}

int main() {

    int decNum = 50;

    // 50 ka binary print karega
    cout << decToBinary(decNum) << endl;

    // 1 se 10 tak sabka binary print karega
    for(int i = 1; i <= 10; i++){
        cout << decToBinary(i) << endl;
    }

    return 0;
}