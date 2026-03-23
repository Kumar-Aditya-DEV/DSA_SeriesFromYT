class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        for(int i=0; i<n;i++){
            for(int j=i+1; j<n; j++){
                int width = j - i;       // width hai ye 
                int height = min(height[i], height[j]);    // height hai ye
                int area = width * height;
                maxWater = max(maxWater, area);     // maxWater se compare kiya hai
            }
        }
        return maxWater;
    }
};
