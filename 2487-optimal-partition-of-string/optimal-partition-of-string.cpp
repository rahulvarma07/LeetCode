class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int>check;
        int i = 0;
        int ans = 0;
        for(int j = 0; j < s.size(); j++){
            check[s[j]]++;
            bool isTrue = false;
            while(check[s[j]] >= 2){
                for(; i < j; i++){
                    check[s[i]]--;
                    if(check[s[i]] <= 0) check.erase(s[i]);
                }
                isTrue = true;
            }
            if(isTrue)ans++;
        }
        return ans+1;
    }
};