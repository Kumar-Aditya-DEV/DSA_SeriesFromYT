#include<iostream>
using namespace std;
int BinaryToDecimal(int binNum) {
int ans = 0, pow = 1;

while(binNum > 0) {
int rem = binNum % 10;
ans += (rem * pow);

binNum /= 10;
pow *= 2;

}
return ans; //decimal form
}


int main() {

cout << BinaryToDecimal(1010) << endl;
return 0;
}