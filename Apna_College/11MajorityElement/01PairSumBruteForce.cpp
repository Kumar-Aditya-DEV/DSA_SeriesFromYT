#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
  vector<int> ans;
  int n = nums.size();

  for(int i=0; i<n;i++){
    for(int j=i+1; j<n; i++){
      if(nums[i] + nums[j] == target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }
  return ans;
}
int main(){
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> ans = pairSum(nums, target);
  cout << ans[0] << ", " << ans[1] << endl;
  
  return 0;
}









// another method 
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(int nums[], int n, int target){
    vector<int> ans;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

int main(){
    int nums[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    vector<int> ans = pairSum(nums, n, target);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}