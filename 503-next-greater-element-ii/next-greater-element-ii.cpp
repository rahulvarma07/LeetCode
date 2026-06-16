class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(), m = n*2;
        vector<int> ans(n, -1);
        vector<int> nums2(m, 0);
        for(int i = 0; i < n; i++) {
            nums2[i] = nums[i];
            nums2[n+i] = nums[i];
        }
        stack<int> st;
        st.push(nums2[m-1]);
        for(int i = m-2; i >= 0; i--) {
            while(!st.empty() && nums2[i] >= st.top()) {
                st.pop();
            }
            if(!st.empty() && i < n) {
                ans[i] = st.top();
            }
            st.push(nums2[i]);
        }
        return ans;
    }
};