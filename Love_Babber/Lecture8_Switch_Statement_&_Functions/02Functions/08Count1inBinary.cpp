#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = 0;
    int place = 1;
    int count = 0;

    while(n != 0) {

        int bit = n & 1;

        if(bit == 1) {
            count++;
        }

        ans = (bit * place) + ans;

        place = place * 10;

        n = n >> 1;
    }

    cout << "Binary is: " << ans << endl;
    cout << "Total number of 1's: " << count << endl;

    return 0;
}
