#define ll long long int 
const int MOD = 1e9+7;
class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        vector<ll> corPoints;
        vector<ll> pref;
        unordered_map<int, ll> yCor;
        for(auto a : points){
            yCor[a[1]]++;
        }
        for(auto a: yCor){
            ll n = a.second;
            n--;
            ll score = n * (n+1)/2;
            corPoints.push_back(score);
        }
        sort( corPoints.begin(),  corPoints.end());
        pref.resize(corPoints.size(), 0);
        for(int i = 0; i < corPoints.size(); i++){
            pref[i] = corPoints[i];
            pref[i] += (i == 0 ? 0ll : pref[i-1]);
        }
        ll ans = 0;
        for(int i = pref.size()-2; i >= 0; i--){
            ll a = pref[i] % MOD;
            ll b = corPoints[i+1]%MOD;
            ll mul = (a * b) % MOD;
            ans = (ans + mul) % MOD;
        }
        return ans;
    }
};