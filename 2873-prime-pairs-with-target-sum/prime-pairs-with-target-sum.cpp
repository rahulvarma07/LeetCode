class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int>Primes(n+1, 1);
        vector<vector<int>>ans;
        for(int i = 2; i <= n; i++){
            if(Primes[i] == 1){
                for(long long int j = pow(i,2); j <= n; j += i){
                    Primes[j] = 0;
                }
            }
        }
        for(int i = 2; i <= n/2; i++){
            int diff = n-i;
            if(Primes[diff] == 1 && Primes[i] == 1){
                ans.push_back({i, diff});
            }
        }
        return ans;
    }
};