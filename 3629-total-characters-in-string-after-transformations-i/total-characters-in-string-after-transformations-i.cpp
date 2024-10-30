class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<int>check1(26, 0);
        for(auto a:s) check1[a - 'a']++;
        int mod = 1000000007;
        while(t--){
            vector<int>check2(26, 0);
            for(int i = 0; i < 26; i++){
                if(check1[i] > 0 && i != 25){
                    check2[i+1] = (check2[i+1] + (check1[i]))%mod;
                }
                else if(i == 25){
                    check2[0] = (check2[0] + (check1[i]))%mod;;
                    check2[1] = (check2[1] + (check1[i]))%mod;
                }
            }
            check1 = check2;
        }
        int ans = 0;
        for(auto a: check1) ans = (ans+a)%mod;
        return ans%mod;
    }
};