#include<iostream>
#include<climits>   // <-- ye add karo
using namespace std;

int main(){

    int x;
    cout << "Enter a number: ";
    cin >> x;

    int ans = 0;

    while (x != 0){
        int digit = x % 10;

        if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
            cout << "Overflow occurred!";
            return 0;
        }

        ans = (ans * 10) + digit;
        x = x / 10;
    }

    cout << "Reversed number: " << ans;

    return 0;
}


















