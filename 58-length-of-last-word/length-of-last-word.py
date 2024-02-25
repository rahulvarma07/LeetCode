class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s1=s.split()
        for i in s1:
            i = s1[((len(s1))-1)]
        return len(i)
       