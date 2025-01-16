class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int>check;
        for(auto a:s){
            check[a] ++;
            if(check[a] == 3){
                check[a] = 1;
            }
        }
        int ans = 0;
        for(auto a: check){
            ans += a.second;
        }
        return ans;
    }
};