#define ll long long int
const int mod = 1e9+7;
const int prime = 31;

class Solution {
public:
    ll power(ll a, ll b){
        if(b == 1) return a;
        ll ans = power(a, b/2);
        ans = (ans * ans)%mod;
        if(b%2 != 0) ans = (ans * a)%mod;
        return ans;
    }

    ll mod_mul(ll a, ll b){
        a %= mod;
        b %= mod;
        return (a * b) % mod;
    }

    ll mod_sub(ll a, ll b){
        a %= mod;
        b %= mod;
        return (a - b + mod) % mod;
    }

    bool hasAllCodes(string s, int k) {
        int n = s.size();
        vector<ll>powers(n, 1), inversePowers(n, 1), hash(n, 1);
        ll inversePrime = power(prime, mod-2);
        for(int i = 1; i < n; i++){
            powers[i] = (powers[i-1] * prime) % mod;
            inversePowers[i] = (inversePowers[i-1] * inversePrime) % mod;
        }
        for(int i = 0; i < n; i++){
            int val = (s[i] == '0' ? 1 : 2);
            hash[i] = (((val * powers[i]) % mod) + (i == 0 ? 0ll : hash[i-1]))%mod;
        }
        unordered_map<ll, int>mp;
        int i = 0;
        for(int j = k-1; j < n; j++){
            if(i == 0){
                mp[hash[j]]++;
            }
            else{
                ll val = mod_sub(hash[j], hash[i-1]);
                val = mod_mul(val, inversePowers[i]);
                mp[val]++;
            }
            i++;
        }
        ll actualValue = pow(2, k);
        if(mp.size() >= actualValue) return true;
        return false;
    }
};