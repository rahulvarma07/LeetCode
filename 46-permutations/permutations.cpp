class Solution {
public:
    void per(vector<int>p, map<int, int>mymap, vector<vector<int>>&ans, vector<int>nums)
    {
        if(p.size() == nums.size())
        {
            ans.push_back(p);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(mymap[i] == 0)
            {
                p.push_back(nums[i]);
                mymap[i] = 1;
                per(p, mymap, ans, nums);
                mymap[i] = 0;
                p.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>p;
        map<int, int>mymap;
        per(p, mymap, ans, nums);
        return ans;
    }
};