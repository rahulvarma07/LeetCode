class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>myst;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b'){
                myst.push(s[i]);
            }
            else if(s[i] == 'a' and myst.size() > 0){
                if(myst.top() = 'b'){
                   myst.pop();
                   ans += 1;
                }
            }
        }
        return ans;
    }
};