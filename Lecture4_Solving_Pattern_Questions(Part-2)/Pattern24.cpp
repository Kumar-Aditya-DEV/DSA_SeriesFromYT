#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no. : ";
    cin >> n;

    int row = 1;
    int count = 1;   // for continuous numbers

    while(row <= n){

        // print spaces
        int space = n - row;
        while(space){
            cout << "  ";
            space--;
        }

        // print numbers
        int col = 1;
        while(col <= row){
            cout << count << " ";
            count++;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
