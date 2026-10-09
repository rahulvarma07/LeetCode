class Solution {
public:
    int minInsertions(string s) {
        /*
            )())
            ()())
            ))))))) 
        */
        // ()()) oc=1, cc = 1
        int ans = 0;
        int closeCount = 0, openCount = 0;
        for(auto &a: s) {
            if(a == '(') {
                if(closeCount == 1 && openCount >= 1) {
                    ans++;
                    openCount--;
                    closeCount--;
                }
                if(closeCount == 1 && openCount == 0) {
                    ans += 2;
                    closeCount--;
                }
                openCount++;
            }else {
                closeCount++;
                if(closeCount == 2 && openCount >= 1) {
                    openCount--;
                    closeCount = 0;
                }else if(closeCount == 2 && openCount == 0) {
                    ans++;
                    closeCount = 0;
                }
            }
        }
        //return ans;
        if(closeCount == 1 && openCount >= 1) {
            ans++;
            closeCount = 0;
            openCount--;
        }
        cout << openCount << " " << closeCount;
        return (ans + (2 * closeCount) + 2 * openCount); 
    }
};