class Solution {
public:
    vector<int> func(vector<int>&nums1, vector<int>&nums2){
        unordered_map<int, int>check;
        vector<int>p;
        for(auto a:nums2) check[a]++;
        for(auto a:nums1){
            if(check.find(a) == check.end()) p.push_back(a);
            check[a]++;
        }
        return p;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>p1 = func(nums1, nums2);
        vector<int>p2 = func(nums2, nums1);
        return {p1, p2};
    }
};