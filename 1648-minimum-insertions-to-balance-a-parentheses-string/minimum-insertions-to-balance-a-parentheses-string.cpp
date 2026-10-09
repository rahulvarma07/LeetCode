class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        int closeCount = 0, openCount = 0;
        for(auto &a: s) {
            if(a == '(') {
                if(closeCount == 1) {
                    if(openCount >= 1) {
                        ans++;
                        openCount--;
                    }else {
                        ans += 2;
                    }
                    closeCount--;
                }
                openCount++;
            }else {
                closeCount++;
                if(closeCount == 2) {
                    if(openCount >= 1) openCount--;
                    else if(closeCount == 2) ans++;
                    closeCount = 0;
                }
            }
        }
        if(closeCount == 1 && openCount >= 1) {
            ans++;
            closeCount = 0;
            openCount--;
        }
        return (ans + (2 * closeCount) + 2 * openCount); 
    }
};