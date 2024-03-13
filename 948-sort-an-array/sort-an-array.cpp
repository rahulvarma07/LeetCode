class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        priority_queue<int>ans;
        for(auto a:nums)
        {
            ans.push(a);
        } 
        nums.clear();
        while(! ans.empty())
        {
            nums.push_back(ans.top());
            ans.pop();
        }
        reverse(nums.begin(),nums.end());
        return nums;  
    }
};