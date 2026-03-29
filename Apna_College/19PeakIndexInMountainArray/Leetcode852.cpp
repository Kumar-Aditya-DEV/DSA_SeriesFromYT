// // linear search o(n) -> gives tle in leetcode 
// int peakIndexInMountainArray(vector<int>& arr) {
//     int maxVal = arr[0];
//     int index = 0;

//     for (int i = 1; i < arr.size(); i++) {
//         if (arr[i] > maxVal) {
//             maxVal = arr[i];
//             index = i;
//         }
//     }

//     return index;
// }






// another binary approach
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2;  // edges avoid kiye

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                return mid;  // peak mil gaya
            }
            else if (arr[mid - 1] < arr[mid]) {
                st = mid + 1;   // increasing side → right jao
            }
            else {
                end = mid - 1;  // decreasing side → left jao
            }
        }

        return -1;
    }
};