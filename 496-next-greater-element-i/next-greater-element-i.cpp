class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        stack<int> st;
        st.push(nums2[n2-1]);
        vector<int> ans(n1, -1);
        unordered_map<int, int> myMap;
        for(int i = n2-2; i >= 0; i--) {
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if(!st.empty()) {
                myMap[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i = 0; i < n1; i++) {
            if(myMap.find(nums1[i]) != myMap.end()) {
                ans[i] = myMap[nums1[i]];
            }
        }
        return ans;
    }
};