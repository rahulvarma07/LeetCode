class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size()-1;
        int ans = 0;
        while(low <= high){
            int d = (high - low);
            ans = max(ans, (min(height[low], height[high])*d));
            if(height[low] >= height[high])high--;
            else low++;
        }
        return ans;
    }
};