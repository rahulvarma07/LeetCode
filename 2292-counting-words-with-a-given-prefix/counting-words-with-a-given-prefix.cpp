class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int count = 0;
        for(int i = 0; i < words.size(); i++)
        {
            string s = "";
            if(words[i].size() < pref.size())continue;
            for(int j = 0; j < pref.size(); j++)
            {
                s += words[i][j];
            }
            if(s == pref) count += 1;
        }
        return count;
    }
};