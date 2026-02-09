#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number : ";
    cin >> n;
    int row = 1;

    while(row <= n) {

        // Left numbers
        int num = 1;
        while(num <= n - row + 1) {
            cout << num << " ";
            num++;
        }

        // Stars
        int star = 1;
        while(star <= 2 * (row - 1)) {
            cout << "* ";
            star++;
        }

        // Right numbers
        int rev = n - row + 1;
        while(rev >= 1) {
            cout << rev << " ";
            rev--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
