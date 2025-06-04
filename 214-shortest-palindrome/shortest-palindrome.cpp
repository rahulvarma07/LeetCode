#define ll long long int
const int mod = 1e9+7;
const int prime = 41;

class Solution {
public:
    
    ll powerFunc(ll a, ll b){
        if(b == 1) return a;
        ll ans = powerFunc(a, b/2);
        ans = (ans * ans)%mod;
        if(b%2 != 0) ans = (ans * a)%mod;
        return ans;
    }

    ll mod_sub(ll a, ll b){
        a %= mod;
        b %= mod;
        return (a - b + mod) %  mod;
    }
    
    ll mod_mul(ll a, ll b){
        a %= mod;
        b %= mod;
        return (a * b) % mod;
    }


    string shortestPalindrome(string s) {
        int n = s.size();
        vector<ll>hashPref(n, 1);
        vector<ll>hashSuff(n, 1);
        vector<ll>powers(n, 1);
        vector<ll>inversePowers(n, 1);

        ll inversePrime = powerFunc(prime, mod-2);
        for(int i = 1; i < n; i++){
            powers[i] = (powers[i-1] * prime) % mod;
            inversePowers[i] = (inversePowers[i-1] * inversePrime) % mod;
        }
        for(int i = 0; i < n; i++){
            hashPref[i] = ((s[i]-'a'+1ll) * (powers[i]%mod)%mod + (i == 0 ? 0ll : hashPref[i-1]))%mod;
            hashSuff[n-1-i]= ((s[n-i-1]-'a'+1ll) * (powers[i]%mod)%mod + (i == 0 ? 0ll : hashSuff[n-i]))%mod;
        }
        
        int j = n-1;
        while(j >= 0){
            if(j == n-1){
                if(hashPref[j] == hashSuff[0]) break;
            }
            else{
                ll val = mod_sub(hashSuff[0], hashSuff[j+1]);
                val = mod_mul(val, inversePowers[n-1-j]);
                if(val == hashPref[j]) break;
            }
            j--;
        }
        string str = "";
        for(auto a:hashPref) cout << a << " ";
        for(int i = j+1; i < n; i++){
            str += s[i];
        }
        reverse(str.begin(), str.end());
        return str+s;
    }
};