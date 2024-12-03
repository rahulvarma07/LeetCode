class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int ind = 0;
        for(int i =0 ; i < s.size(); i++){
            if(ind < spaces.size() && i == spaces[ind]){
                ans += ' ';
                ind++;
            }
            ans += s[i];
        }
        return ans;
    }
};