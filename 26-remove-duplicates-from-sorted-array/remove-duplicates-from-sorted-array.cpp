class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int,int>ans;
        for(auto a:nums){
            ans[a] += 1;
        }
        int i = 0;
        for(auto a:ans){
            nums[i] = a.first;
            a.second -= 1;
            i ++;
        }
        return ans.size();
    }
};