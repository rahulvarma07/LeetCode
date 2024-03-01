class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int n = s.size();
        int count = 0;
        string ans = string(n,'0');
        for(auto a:s)
        {
            if(a=='1')count += 1;
        }
        ans[n-1] = '1';
        count  = count-1;
        int i = 0;
        while(count > 0)
        {
            ans[i] = '1';
            i += 1;
            count -= 1;
        }
        return ans;
        
    }
};