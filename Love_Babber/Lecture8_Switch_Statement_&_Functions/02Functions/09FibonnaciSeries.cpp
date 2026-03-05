#include <iostream>
using namespace std;


// int fibonacci(int n) {
//     if(n == 0) return 0;
//     if(n == 1) return 1;

//     int a = 0, b = 1, next;

//     for(int i = 2; i <= n; i++) {
//         next = a + b;
//         a = b;
//         b = next;
//     }

//     return b;
// }


int fibonacci(int n) {
    if(n <= 1)
        return n;

    return fibonacci(n-1) + fibonacci(n-2);
}



int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
