class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // for(auto a:nums) cout << a << " ";
        // cout << endl;
        int ans = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                nums[i] = nums[i]+1;
                ans += 1;
            }
            else if(nums[i] < nums[i-1]){
                ans += abs(nums[i-1] - nums[i]) + 1;
                nums[i] = nums[i-1] + 1;
            }
        }
        for(auto a:nums) cout << a << " ";
        return ans;
        return 1;
    }
};