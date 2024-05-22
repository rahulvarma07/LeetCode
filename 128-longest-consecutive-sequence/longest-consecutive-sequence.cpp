class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        unordered_set<int>ans;
        int l = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            ans.insert(nums[i]);
        }

        for(auto a: ans)
        {
            if(ans.find(a - 1) == ans.end())
            {
                int x = a;
                int cnt = 1;
                while(ans.find(x + 1) != ans.end())
                {
                    x = x + 1;
                    cnt ++;
                }
                l = max(l , cnt);   
            }
        }
        return l;
    }
};