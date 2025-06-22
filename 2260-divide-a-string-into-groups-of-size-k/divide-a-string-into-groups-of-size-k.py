class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        ans = []
        for i in range(0 , len(s) , k): 
            string = ""
            for j in range(i , i+k):
                if j < len(s):
                    string += s[j]
                else : 
                    string += fill
            ans.append(string)
        return ans

        