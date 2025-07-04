class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> check;
        for(auto a: nums1){
            check[a] = false;
        }
        for(auto a: nums2){
            if(check.find(a) != check.end()){
                check[a] = true;
            }
        }

        vector<int>ans;
        for(auto a: check){
            if(a.second){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};