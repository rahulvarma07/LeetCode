class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        bool isStart = false;
        for(auto &a : s) {
            if(a == '|') isStart = !isStart;
            if(!isStart) {
                if(a == '*') ans++;
            }
        }
        return ans;
    }
};