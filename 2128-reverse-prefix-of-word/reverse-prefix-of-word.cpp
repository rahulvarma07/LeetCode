class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        string ans = "";
        int i= 0;
        int flag = 0;
        for(i = 0 ; i < word.size(); i ++)
        {
            ans += word[i];
            if(word[i] == ch)
            {
                flag = 1;
                break;
            }
        }
        int index = i+1;
        if(flag == 0 and ans.size() == word.size()) return ans;
        reverse(ans.begin(),ans.end());
        for(int i = index;i < word.size(); i ++)
        {
            ans += word[i];
        }
        return ans;
    }
};