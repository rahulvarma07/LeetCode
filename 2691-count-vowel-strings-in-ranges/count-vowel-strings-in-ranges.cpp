class Solution {
public:
    bool isVowel(char str){
        if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u'){
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pref(words.size(), 0);
        int cnt = 0;
        for(int i = 0; i < words.size(); i++){
            int n = words[i].size()-1;
            if(isVowel(words[i][0]) && (isVowel(words[i][n]))){
                cnt++;
            }
            pref[i] = cnt;
        }
        vector<int>ans(queries.size(), 0);
        for(int i = 0; i < queries.size(); i++){
            if(queries[i][0] == 0){
                ans[i] = pref[queries[i][1]];
                continue;
            }
            else{
                ans[i] = (pref[queries[i][1]] - pref[queries[i][0]-1]);
            }
        }
        return ans;
    }
};