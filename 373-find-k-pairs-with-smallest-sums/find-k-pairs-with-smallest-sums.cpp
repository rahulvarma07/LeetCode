class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<vector<long long int>, vector<vector<long long int>>, greater<vector<long long int>>> pq;
        vector<vector<int>> ans;
        for(int i = 0; i < nums1. size(); i++) {
            pq.push({(nums1[i] + nums2[0]), i, 0});
        }
        while(k--){
            vector<long long int> t = pq.top();
            ans.push_back({nums1[t[1]], nums2[t[2]]});
            pq.pop();
            if(t[2] == nums2.size()-1) {
                continue;
            }
            pq.push({(nums1[t[1]] + nums2[t[2]+1]), t[1], t[2]+1});
        }
        return ans;
    }
};