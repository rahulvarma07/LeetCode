class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans = 0;
        unordered_set<int> mySet;
        for(auto a: arr1) {
            int x = a;
            while(x > 0) {
                mySet.insert(x);
                x /= 10;
            }
        }
        for(auto a: arr2) {
            int x = a;
            while(x > 0) {
                if(mySet.find(x) != mySet.end()) {
                    int n = x;
                    string str = to_string(n);
                    ans = max(ans, (int)str.size());
                }
                x /= 10;
            }
        }
        return ans;
    }
};