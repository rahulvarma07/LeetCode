class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int,int>ans;
        int maxx = -1;
        int count = 0;
        for(auto a:nums)
        {
            ans[a] ++;
        }
        for(auto a:ans)
        {
            maxx = max(maxx,a.second);

        }
        for(auto a:ans)
        {
            if(a.second == maxx) count += a.second;
        } 
    return count;     
    }
};