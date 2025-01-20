class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        map<int,int>mp;
        vector<int>ans;
        int i = 0, j = 0;
        for( ; j < k; j++){
            mp[nums[j]]++;
        }
        j--;
        while(j < nums.size()){
            auto it = mp.rbegin();
            ans.push_back(it->first);
            mp[nums[i]]--;
            if(mp[nums[i]] == 0) mp.erase(nums[i]);
            i++;
            j++;
            if(j < nums.size()) mp[nums[j]]++;
        }
        return ans;
    }
};