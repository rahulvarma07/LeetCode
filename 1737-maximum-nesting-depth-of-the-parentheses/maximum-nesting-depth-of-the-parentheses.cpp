class Solution {
public:
    int maxDepth(string s) {
        int maxx = 0, cnt = 0;
        for(auto a:s){
            if(a == '(') cnt++;
            else if(a == ')') cnt--;
            maxx = max(maxx, cnt);
        }
        return maxx;
    }
};