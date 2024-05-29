class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                int n = s[i] - '0';
                s[i] = s[i-1] + n; 
            }
        }
        return s;
    }
};