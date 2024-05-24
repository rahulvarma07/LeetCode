class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(n*2, 0);
        for(int i = 0; i < n; i++)
        {
            ans[i*2] = nums[i];
        }
        int a = 1;
        for(int i = n; i < n*2; i++)
        {
            ans[a] = nums[i];
            a += 2;
        }        
        return ans;
    }
};