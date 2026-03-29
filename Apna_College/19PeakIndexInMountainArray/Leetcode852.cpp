// linear search o(n) -> gives tle in leetcode 
int peakIndexInMountainArray(vector<int>& arr) {
    int maxVal = arr[0];
    int index = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            index = i;
        }
    }

    return index;
}

