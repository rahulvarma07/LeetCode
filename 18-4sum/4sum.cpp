class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<int>push;
        set<vector<int>>st;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                set<long long >mymap;
                for(int k = j+1; k < nums.size(); k++)
                {
                   long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long l = target - sum;
                    if(mymap.find(l) != mymap.end())
                    {
                        push = {nums[i], nums[j], nums[k], (int)(l)};
                        sort(push.begin(), push.end());
                        st.insert(push);
                    }
                    mymap.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans (st.begin(), st.end());
        return ans;
    }
};