class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int>mp;
        vector<string>ans;
        int i = 0, j = 9;
        for(;j < s.size(); j++){
            string str = "";
            for(int x = i; x <= j; x++){
                str += s[x];
            }
            mp[str]++;
            i++;
        }
        for(auto a:mp){
            if(a.second > 1) ans.push_back(a.first);
        }
        return ans;
    }
};