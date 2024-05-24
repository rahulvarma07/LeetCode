class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        string s1 = "";
        int chk = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ') chk += 1;
            if(chk == k) break;
            s1 += s[i];
        }
        return s1;
    }
};