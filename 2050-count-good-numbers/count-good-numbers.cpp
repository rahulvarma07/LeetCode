#define ll long long int
class Solution {
public:
    const int MOD = 1e9+7;

    ll powFunc(ll a, ll b){
        if(b == 0) return 1;
        if(b == 1) return a;
        ll ans =  powFunc(a, b/2);
        ans = ((ans % MOD)*(ans % MOD)) % MOD;
        if(b % 2 != 0){
            ans = (ans * a) % MOD;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        ll ans1;
        ll ans2;
        if(n%2 == 0){
            ans1 = powFunc(5, n/2);
            ans2 = powFunc(4, n/2);
        }
        else{
            ans1 = powFunc(5, (n - (n/2)));
            ans2 = powFunc(4, n/2);
        }
        ll ans = (ans1 * ans2) % MOD;
        return ans;
    }
};