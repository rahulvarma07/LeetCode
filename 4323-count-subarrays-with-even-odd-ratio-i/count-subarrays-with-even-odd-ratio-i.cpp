class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans = 0;
        double check = a/(b*1.0);
        for(int i = 0; i < nums.size(); i++) {
            int x = 0, y = 0;
            for(int j = i; j < nums.size(); j++) {
                if(nums[j]%2 == 0) x++;
                else y++;
                if(y == 0) continue;
                double c1 = x/(y*1.0);
                if(c1 <= check) ans++;
            }
        }
        return ans;
    }
};