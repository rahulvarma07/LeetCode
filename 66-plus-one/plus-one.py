class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        x = int("".join(map(str,digits)))
        a = x+1
        return list(map(int,str(a)))
        