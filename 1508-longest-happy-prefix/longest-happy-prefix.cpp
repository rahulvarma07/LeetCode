#define ll long long int
class Solution {
public:
    const int prime = 31;
    const int mod = 1e9 + 7;

    ll power(ll a, ll b) {
        ll result = 1;
        a %= mod;
        while (b > 0) {
            if (b % 2)
                result = (result * a) % mod;
            a = (a * a) % mod;
            b /= 2;
        }
        return result;
    }

    ll mod_sub(ll a, ll b, ll m) {
        a %= m; b %= m;
        return (a - b + m) % m;
    }

    ll mod_mul(ll a, ll b, ll m) {
        a %= m; b %= m;
        return (a * b) % m;
    }

    string longestPrefix(string s) {
        int n = s.size();
        vector<ll> powers(n, 1), inversePowers(n, 1), actualHash(n, 0);
        
        ll invPrime = power(prime, mod - 2); 
        for (int i = 1; i < n; i++) {
            powers[i] = (powers[i - 1] * prime) % mod;
            inversePowers[i] = (inversePowers[i - 1] * invPrime) % mod;
        }
        for (int i = 0; i < n; i++) {
            ll curr = ((s[i] - 'a' + 1LL) * powers[i]) % mod;
            actualHash[i] = (curr + (i == 0 ? 0 : actualHash[i - 1])) % mod;
        }

        int maxLen = 0;

        for(int i = 0; i < n-1; i++){
            int  b = (n-i-1);
            ll pref = actualHash[i];
            ll suff = mod_sub(actualHash[n-1], actualHash[b-1], mod);
            suff = mod_mul(suff, inversePowers[b], mod);

            if(pref == suff) maxLen = i+1;
        }

        return s.substr(0, maxLen); 
    }
};