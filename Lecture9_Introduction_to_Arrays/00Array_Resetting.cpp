#include <iostream>
#include <vector>
using namespace std;

int main() {

    // -----------------------------
    // Method 1: Vector using assign()
    // -----------------------------
    vector<int> vec1 = {1, 2, 3, 4};
    vec1.assign(vec1.size(), 5);

    cout << "Vector using assign(): ";
    for(int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }
    cout << endl;


    // -----------------------------
    // Method 2: Vector using loop
    // -----------------------------
    vector<int> vec2 = {1, 2, 3, 4};

    for(int i = 0; i < vec2.size(); i++) {
        vec2[i] = 10;
    }

    cout << "Vector using loop: ";
    for(int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;


    // -----------------------------
    // Method 3: Normal Array
    // -----------------------------
    int arr[5];

    for(int i = 0; i < 5; i++) {
        arr[i] = 3;
    }

    cout << "Normal array using loop: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
