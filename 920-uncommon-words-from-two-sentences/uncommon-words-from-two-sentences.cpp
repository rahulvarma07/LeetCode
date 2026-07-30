class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string, int> freq;
        string str = "";
        // traverse in s1 
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != ' ') str += s1[i];
            if(s1[i] == ' ' || i == s1.size()-1) {
                freq[str]++;
                str = "";
            }
        }
        // traverse in s2
        for(int i = 0; i < s2.size(); i++) {
            if(s2[i] != ' ') str += s2[i];
            if(s2[i] == ' ' || i == s2.size()-1) {
                freq[str]++;
                str = "";
            }
        }

        // { this : 2, apple:2, is:2, sweet:1, sour : 1}
        for(auto a : freq) {
            if(a.second == 1) {
                ans.push_back(a.first);
            }
        }
        
        return ans;
    }
};