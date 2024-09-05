class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        int m = rolls.size();
        for(int i = 0; i < rolls.size(); i++) sum += rolls[i];
        int x = (mean*(n+m))-sum;
        if(x <= 0 || x > 6*n) return {};
        vector<int>check(n, x/n);
        int sum2 = (x/n)*n;
        if(sum2 <= 0) return {};
        if(sum2 == x) return check;
        for(int i = 0; i < check.size(); i++){
            while(check[i] < 6 && sum2 != x){
                check[i]++;
                sum2++;
            }
            if(sum2 == x) break;
        }
        return check;
    }
};