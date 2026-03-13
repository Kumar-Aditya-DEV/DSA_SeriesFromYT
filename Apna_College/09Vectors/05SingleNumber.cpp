#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums) {
            ans = ans ^ val;
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {4, 1, 2, 1, 2};

    int result = obj.singleNumber(nums);

    cout << "Single number is: " << result << endl;

    return 0;
}






// see in leetcode -> 136