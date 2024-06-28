class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans(s.size(), 0);
        vector<int>check;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                check.push_back(i);
            }
        }

        for(int i = 0; i < s.size(); i++){
            int res = INT_MAX;
            for(int j = 0; j < check.size(); j ++){
                res = min(res, abs(i - check[j]));
            }
            ans[i] = res;
        }
        return ans;
    }
};