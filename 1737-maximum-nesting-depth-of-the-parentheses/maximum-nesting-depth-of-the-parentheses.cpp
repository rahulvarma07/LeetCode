class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0, ans = 0;
        for(auto a: s) {
            if(a == '(') {
                cnt++;
            }else if(a == ')'){
                cnt--;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};