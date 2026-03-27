#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int>& arr, int tar, int st, int end) {
    if(st <= end){
        int mid = st + (end - st) / 2;

        if(tar > arr[mid]){     // right side
            return recBinarySearch(arr, tar, mid+1, end);
        }
        else if(tar < arr[mid]){    // left side
            return recBinarySearch(arr, tar, st, mid-1);
        }
        else{     // found
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 10;

    cout << recBinarySearch(arr2, tar2, 0, arr2.size()-1) << endl;
    return 0;
}