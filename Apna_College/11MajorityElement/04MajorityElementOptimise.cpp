// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var majorityElement = function(nums) {
//   int n = nums.size();

//   // sort
//   sort(nums.begin(), numsend());

//   // freq count
//   int freq = 1, ans = nums[0];
//   for (int i = 0; i < n; i++)
//   {
//     if(nums[i] == nums[i-1]){
//       freq++;
//     }
//     else{
//       freq = 1;
//       ans = nums[i];
//     }

//     if(freq > n/2){
//       return ans;
//     }
//   }

//   return ans;
  
// }; 









// in vs code
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();

    // sort array
    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++) {   // i = 1 se start
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2) {
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
    return 0;
}