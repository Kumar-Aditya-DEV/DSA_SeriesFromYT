class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // // with linear search
        // int n = nums.size();
        
        // for(int i = 0; i < n - 1; i += 2){
        // if(nums[i] != nums[i + 1]){
        //     return nums[i];
        //     }
        // }
        // return nums[n - 1];


        // with bit wise operator 
        int ans = 0;
        
        for(int num : nums){
        ans ^= num;
        }
        return ans;
    }
};