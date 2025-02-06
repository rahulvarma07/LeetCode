class Solution {
public:
    int maxOperations(vector<int>& nums, int k){
        int l = 0, h = nums.size()-1, ans = 0;
        sort(nums.begin(), nums.end());
        while(l < h){
            int sum = nums[l]+nums[h];
            if(sum == k){
                ans++;
                l++;
                h--;
            }
            else if(sum < k){
                l++;
            }
            else{
                h--;
            }
        } 
        return ans;
    }
};