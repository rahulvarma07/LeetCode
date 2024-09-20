class Solution:
    def shortestPalindrome(self, s: str) -> str:
        if(s == s[::-1]):
            return s
        ch = s
        str_add = ""
        for i in range(len(s) - 1, -1, -1):
            if s[i] == s[0]:
                if ch == ch[::-1]:
                    break
            str_add += s[i]
            ch = ch[:-1]
        ans = str_add+s
        return ans



