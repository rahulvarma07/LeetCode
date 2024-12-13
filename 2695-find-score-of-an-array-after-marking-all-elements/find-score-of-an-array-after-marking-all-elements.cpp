class Solution {
public:
    long long findScore(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        long long int ans = 0;
        vector<pair<int, int>>pq;
        for(int i = 0; i < nums.size(); i++){
            pq.push_back({nums[i], i});
        }
        sort(pq.begin(), pq.end());
        for(int i = 0; i < pq.size(); i++){
            if(pq[i].second == 0 && nums[0] != INT_MAX){
                ans += nums[pq[i].second];
                nums[1] = INT_MAX;
            }
            else if(pq[i].second == nums.size()-1 && nums[nums.size()-1] != INT_MAX){
                ans += nums[pq[i].second];
                nums[nums.size()-2] = INT_MAX;
            }
            else if(nums[pq[i].second] != INT_MAX){
                ans += nums[pq[i].second];
                nums[pq[i].second+1] = INT_MAX;
                nums[pq[i].second-1] = INT_MAX;
            }
        }
        return ans;
    }
};