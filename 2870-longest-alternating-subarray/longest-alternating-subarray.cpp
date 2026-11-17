class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            int cnt = 1;
            bool diff = true;
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[j]-nums[j-1] != (diff ? 1 : -1)) break;
                diff = !diff;
                cnt++;
            }
            ans = max(ans, cnt);
        }
        return (ans <= 1 ? -1 : ans);
    }
};