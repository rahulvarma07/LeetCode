class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        unordered_map<int, int>check;
        for(auto a: spaces) check[a] = 1;
        for(int i = 0; i < s.size(); i++){
            if(check[i] == 1){
                ans += ' ';
            }
            ans += s[i];
        }
        return ans;
    }
};