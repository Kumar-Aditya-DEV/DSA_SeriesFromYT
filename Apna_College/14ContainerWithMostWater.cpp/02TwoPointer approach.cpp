class Solution {
public:
    int maxArea(vector<int>& height) {
      int lp = 0, rp = n-1, ans = 0;
      while(lp < rp){
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = width * ht;
        int maxWater = max(maxWater, currWater);
        ht[lp] < ht[rp] ? lp++ : rp--;
      }
    }
};
