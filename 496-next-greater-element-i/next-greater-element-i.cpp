class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> monotonic;
        unordered_map<int, int> myMap;
        monotonic.push(nums2[n-1]);
        myMap[nums2[n-1]] = -1;
        for(int i = n-2; i >= 0; i--){
            while(monotonic.size() > 0 && monotonic.top() < nums2[i]){
                monotonic.pop();
            }
            (monotonic.size() > 0 ? myMap[nums2[i]] = monotonic.top() : myMap[nums2[i]] = -1);
            monotonic.push(nums2[i]);
        }
        vector<int> ans(nums1.size(), 0);
        for(int i = 0; i < ans.size(); i++){
            ans[i] = myMap[nums1[i]];
        }
        return ans;
    }
};