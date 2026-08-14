class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int>check;
        int i = 0, j = 0, ans = 0, cnt = 0;
        while(j < s.size()){
            check[s[j]]++;
            while(check[s[j]] > 2){
                check[s[i]]--;
                if(check[s[i]] == 0) check.erase(s[i]);
                i++;
            }
            if(check[s[j]] <= 2){
                int x = (j-i)+1;
                ans = max(ans, x);
            }
            j++;
        }
        return ans;
    }
};