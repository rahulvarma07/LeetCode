class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>check;
        int i = 0, j = 0, ans = 0, n = s.size();
        while(j < s.size()){
            check[s[j]]++;
            while(check.size() == 3){
                ans += (n-j);
                check[s[i]]--;
                if(check[s[i]] == 0) check.erase(s[i]);
                i++;
            }
            j++;
        }
        cout << i;
        // if(i == 0 && check.size() == 3) return 1;
        return ans;
    }
};