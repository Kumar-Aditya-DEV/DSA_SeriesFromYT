// -------------------------------------------------
// NUMBER BUILD + REVERSE LOGIC (Complete Concept)
// -------------------------------------------------

#include <iostream>
using namespace std;


// 🔹 1️⃣ Normal Number Build Karna (Left → Right)
// Formula:
// ans = (ans * 10) + digit;
//
// Example:
// 123 banane ke liye:
// Step 1: (0 * 10) + 1 = 1
// Step 2: (1 * 10) + 2 = 12
// Step 3: (12 * 10) + 3 = 123


int buildNumber()
{
    int ans = 0;
    int digit;

    cout << "Enter 3 digits one by one: " << endl;

    for(int i = 0; i < 3; i++)
    {
        cin >> digit;
        ans = (ans * 10) + digit;
    }

    return ans;
}


// 🔹 2️⃣ Reverse Number Banana (Right → Left)
// Same formula use hota hai:
// ans = (ans * 10) + digit;
//
// Bas digit nikalte hai using:
// digit = n % 10
// n = n / 10

int reverseNumber(int n)
{
    int ans = 0;

    while(n > 0)
    {
        int digit = n % 10;      // last digit nikalo
        ans = (ans * 10) + digit;
        n = n / 10;              // last digit hatao
    }

    return ans;
}


int main()
{
    // 🔹 Number Build Example
    int number = buildNumber();
    cout << "Built Number: " << number << endl;

    // 🔹 Reverse Example
    int reversed = reverseNumber(number);
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
