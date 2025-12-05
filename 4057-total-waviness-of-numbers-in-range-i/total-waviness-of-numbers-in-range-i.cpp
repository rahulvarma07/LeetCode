class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i <= num2; i++) {
            string str = to_string(i);
            if(str.size() < 3) continue;
            else {
                for(int j = 1; j < str.size()-1; j++) {
                    if(str[j] > str[j-1] && str[j] > str[j+1] || str[j] < str[j-1] && str[j] < str[j+1]) ans++;
                }
            }
        }
        return ans;
    }
};