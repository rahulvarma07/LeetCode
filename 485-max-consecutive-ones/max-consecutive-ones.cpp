class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int ans = 0;
        int maxx = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                ans += 1;
            }
            else{
                maxx = max(maxx, ans);
                ans = 0;
            }
        }
        maxx = max(maxx, ans);
        return maxx;
    }
};