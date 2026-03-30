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




        // // with bit wise operator 
        // int ans = 0;
        
        // for(int num : nums){
        // ans ^= num;
        // }
        // return ans;



        // // more optimise and short code
        // int n = nums.size();

        // if(n == 1) return nums[0];

        // int st = 0, end = n - 1;

        // while(st < end){
        //     int mid = st + (end - st) / 2;

        //     // make mid even
        //     if(mid % 2 == 1) mid--;
        //     if(nums[mid] == nums[mid + 1]){
        //         st = mid + 2;
        //     } else {
        //         end = mid;
        //     }
        // }
        // return nums[st];




        
        // optimise but long code
        int n = nums.size();

        if(n == 1) return nums[0];

        int st = 0, end =  n - 1;
        while(st <= end){
            int mid = st + (end - st) / 2;

            if(mid == 0 && nums[0] != nums[1]) return nums[mid];
            if(mid == n - 1 && nums[n - 1] != nums[n - 2]) return nums[mid];

            if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])  return nums[mid];

            if(mid % 2 == 0){ // even condition
                if(nums[mid -1] == nums[mid]){ // left case 
                    end = mid -1;
                }
                else{  // right case
                    st = mid + 1;
                }
            }
            else{  // odd condition
                if(nums[mid - 1] == nums[mid]){  // right case 
                    st = mid + 1;
                }
                else{ // left case
                    end = mid - 1;
                }
            }
        }
        return -1;

    }
};