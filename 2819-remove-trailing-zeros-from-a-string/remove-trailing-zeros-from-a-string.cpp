class Solution {
public:
    string removeTrailingZeros(string num) {
        for(int i = num.size()-1 ; i >= 0; i--)
        {
            if(num[i] >= '1' and num[i] <= '9') break;
            num.pop_back();
        }
        return num;
    }
};