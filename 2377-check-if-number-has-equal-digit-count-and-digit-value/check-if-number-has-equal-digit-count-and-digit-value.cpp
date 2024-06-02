class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>ans;
        for(int i = 0; i< num.size(); i++){
            int n = num[i] - '0';
            ans[n] += 1;
        }
        for(int i = 0; i< num.size(); i++)
        {
            int n = num[i] - '0';
            if(n != ans[i]) return false;
        }
        return true;
    }
};