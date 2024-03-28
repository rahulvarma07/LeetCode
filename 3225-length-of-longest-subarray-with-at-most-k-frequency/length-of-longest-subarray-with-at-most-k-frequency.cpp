class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int len = 0 , left = 0 , right = 0;
        map<int, int> ans;
        while(right < nums.size())
            {
            ans[nums[right]] += 1;
            while(left <= right and ans[nums[right]] > k)
                {
                ans[nums[left]] -= 1;
                left += 1;
                }
            len = max(len,(right - left)+1);
            cout << nums[left] <<" ";
            right ++;
        }
        return len;
    }
};