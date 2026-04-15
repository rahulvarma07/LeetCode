class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX, n = words.size();
        for(int i = 0; i < words.size(); i++) {
            if(words[i] == target) {
                ans = min(ans, abs(startIndex-i));
                ans = min(ans, abs(n-startIndex + i));
                ans = min(ans, abs(n-i+startIndex));
                // cout << abs(startIndex-i) << " " << abs(n-i+startIndex) << endl;
            }
        }
        // 0 (5-1=>4)
        return (ans == INT_MAX ? -1 : ans);
    }
};

// {h, i, am, lc, hello, hey}
// 1
