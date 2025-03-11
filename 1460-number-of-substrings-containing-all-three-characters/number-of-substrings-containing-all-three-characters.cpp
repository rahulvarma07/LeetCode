class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0, j = 0;
        unordered_map<char,int>check;
        int ans = 0;
        while(j < s.size()){
            check[s[j]]++;
            while(check.size() == 3){
                ans += (s.size()-j);
                check[s[i]]--;
                if(check[s[i]] == 0) check.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};