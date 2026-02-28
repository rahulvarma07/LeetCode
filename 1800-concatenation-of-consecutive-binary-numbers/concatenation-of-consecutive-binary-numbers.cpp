class Solution {
public:
    const int mod = 1e9+7;
    string binary(int n){
        string str = "";
        while(n > 0){
            if(n % 2 == 0) {
                str += '0';
            }else {
                str += '1';
            }
            n /= 2;
        }
        reverse(str.begin(), str.end());
        return str;
    }
    int concatenatedBinary(int n) {
        string con = "";
        for(int i = 1; i <= n; i++) {
            con += binary(i);
        }
        long long int ans = 0, curr = 1;
        for(int i = con.size()-1; i >= 0; i--) {
            if(con[i] == '1'){
                ans = (ans % mod + curr % mod) % mod;
            }
            curr = (curr * 2) % mod;
        }
        return ans;
    }
};