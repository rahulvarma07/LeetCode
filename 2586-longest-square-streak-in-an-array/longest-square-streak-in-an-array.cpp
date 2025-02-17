class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<long long int, int>check;
        sort(nums.begin(), nums.end());
        for(auto a: nums){
            check[a] = 1;
        }
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            long long int x = (long long int) nums[i]*nums[i];
            int cnt1 = check[nums[i]];
            if(check.find(x) != check.end()){
                cnt = max(cnt, (check[nums[i]] + check[x]));
                check[x] += check[nums[i]];
            }
        }
        if(cnt == 0) return -1;
        return cnt;
    }
};