#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter negative number: ";
    cin >> n;

    // assume n is negative
    n = abs(n);   // positive bana diya

    int ans = 0;
    int i = 0;

    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;

        n = n >> 1;
        i++;
    }

    cout << "Answer is -" << ans << endl;

    return 0;
}
