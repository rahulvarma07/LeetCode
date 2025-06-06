#define ll long long int
const int mod = 1e9+7;
const int prime = 31;

ll power(ll a, ll b){
    if(b == 1) return a;
    ll ans = power(a, b/2);
    ans = (ans * ans)%mod;
    if(b % 2 != 0) return (ans * a) % mod;
    return ans;
}

ll mod_mul(ll a, ll b){
    a %= mod;
    b %= mod;
    return (a * b)%mod;
}

ll mod_sub(ll a, ll b){
    a %= mod;
    b %= mod;
    return (a-b + mod) % mod;
}

class Solution {
public:
    int distinctEchoSubstrings(string text) {
        int n = text.size();
        unordered_map<ll, int>mp;
        vector<ll> hash(n, 1), powers(n, 1), inversePowers(n, 1);
        ll inversePrime = power(prime, mod-2);
        for(int i = 1; i < n; i++){
            powers[i] = (powers[i-1] * prime) % mod;
            inversePowers[i] = (inversePowers[i-1] * inversePrime) % mod;
        }
        for(int i = 0; i < n; i++){
            hash[i] = ((((text[i]-'a'+1) * (powers[i]))  % mod) + (i == 0 ? 0ll : hash[i-1]))%mod;
        }
        for(int len = 1; len < n; len += 2){
            int i = 0; 
            for(int j = len; j < n; j++){
                int x = i + (j - i)/2;
                ll val1;
                ll val2 = mod_sub(hash[j], hash[x]);
                val2 = mod_mul(val2, inversePowers[x+1]);
                if(i == 0){
                    val1 = hash[x];
                }
                else{
                    val1 = mod_sub(hash[x], hash[i-1]);
                    val1 = mod_mul(val1, inversePowers[i]);
                }
                if(val1 == val2){
                    mp[val1]++;
                }
                i++;
            }
        }
        return mp.size();
    }
};