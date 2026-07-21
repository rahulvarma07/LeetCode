class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char, int> lastInd;
        for(int i = 0; i < s.size(); i++) {
            lastInd[s[i]] = i;
        }
        vector<bool> isVisited(26, false);
        stack<char> mSt;
        for(int i = 0; i < s.size(); i++) {
            if(isVisited[s[i]-'a']) continue;
            while(!mSt.empty() && (mSt.top() > s[i] && lastInd[mSt.top()] > i)) {
                isVisited[mSt.top()-'a'] = false;
                mSt.pop();
            }
            isVisited[s[i]-'a'] = true;
            mSt.push(s[i]);
        }
        string ans = "";
        while(!mSt.empty()) {
            ans += mSt.top();
            mSt.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};