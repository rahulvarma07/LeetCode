class Solution {
public:
    int scoreOfString(string s) 
    {
        int sum = 0;
        int i = 0;
        while(i <= s.size()- 2)
        {
            int a = abs(s[i] - s[i+1]);
            sum += a;
            i += 1;
        }
        return sum;   
    }
};