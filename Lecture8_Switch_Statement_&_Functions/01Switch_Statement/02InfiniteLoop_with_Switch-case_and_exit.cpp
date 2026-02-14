#include <iostream>
#include <cstdlib>   // for exit()

using namespace std;

int main() {
    
    while(true) {
        int choice;
        cout << "1. Hello\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Hello Bhai 😎\n";
                break;

            case 2:
                cout << "Program band ho raha hai...\n";
                exit(0);   // yahi se pura program terminate ho jayega
        }
    }

    return 0;
}
