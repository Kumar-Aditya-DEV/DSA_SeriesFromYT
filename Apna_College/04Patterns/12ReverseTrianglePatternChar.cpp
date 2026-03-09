#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j > 0 ; j--) {
          char ch = 'A' + j - 1;
            cout <<  ch << " ";
        }

        cout << endl;
    }

    return 0;
}