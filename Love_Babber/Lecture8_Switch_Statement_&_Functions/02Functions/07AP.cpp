#include <iostream>
using namespace std;

// Function to find nth term of AP
int findAP(int a, int d, int n) {
    return a + (n - 1) * d;
}

int main() {
    int a, d, n;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common difference (d): ";
    cin >> d;

    cout << "Enter term number (n): ";
    cin >> n;

    int result = findAP(a, d, n);

    cout << "Answer is: " << result << endl;

    return 0;
}
