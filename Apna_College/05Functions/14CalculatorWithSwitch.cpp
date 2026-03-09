#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    char op = '+';

    switch(op) {
        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            cout << "Division = " << a / b;
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}