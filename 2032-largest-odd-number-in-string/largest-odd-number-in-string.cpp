class Solution {
public:
    string largestOddNumber(string num) {
        // last odd
        int lastInd = -1;
        for(int i = 0; i < num.size(); i++){
            if((num[i]-'0')%2 != 0) lastInd = i;
        }
        string ans = "";
        for(int i = 0; i <= lastInd; i++) ans += num[i];
        return ans;
    }
};