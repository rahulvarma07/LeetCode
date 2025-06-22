class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        freq = {}
        i = 0
        ans = 0
        for j in range(len(s)):
            if s[j] not in freq:
                freq[s[j]] = 1
            else :
                freq[s[j]] += 1
                
            while (freq[s[j]] > 1): 
                freq[s[i]] -= 1
                i += 1
            ans = max(ans, (j-i)+1)
        return ans
