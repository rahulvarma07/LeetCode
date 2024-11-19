class Solution {
public:
    int titleToNumber(string cT) {
        int ans = 0;
        int var = 0;
        if(cT.size() == 1) return (cT[0]-'A')+1;
        for(int i = 0; i < cT.size(); i++){
            int x = cT[i]-'A'+1;
            ans = (ans*26)+x;
        }
        return ans;
    }
};