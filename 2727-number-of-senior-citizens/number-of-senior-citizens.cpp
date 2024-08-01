class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        int check = 1;
        for(int i = 0; i < details.size(); i++){
            int n = (details[i][11] - '0')*10 + (details[i][12] - '0');
            if(n > 60) ans += 1;
        }
        return ans;
    }
};