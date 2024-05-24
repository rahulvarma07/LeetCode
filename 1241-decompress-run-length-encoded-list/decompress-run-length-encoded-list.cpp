class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int ind = 0;
        int j = 1;
        while(j < nums.size())
        {
            for(int i = 0; i < nums[ind]; i++)
            {
                ans.push_back(nums[j]);
            }
            ind += 2;
            j += 2;
        }
        return ans;
    }
};