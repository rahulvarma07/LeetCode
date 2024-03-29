class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<char,int>ans;
        int right = 0, left = 0;
        int maxx = 0;
        while(right < s.size())
        {
           ans[s[right]] += 1;
           while(left <= right and ans[s[right]] > 1)
           {
             ans[s[left]] -= 1;
             left += 1;
           }
           maxx = max(maxx, 1 + (right - left));
           right += 1;   
        }
        return maxx;    
    }
};