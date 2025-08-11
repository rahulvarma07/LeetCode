class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int mod = 1e9+7;
        vector<int> powers;
        int x = 1, temp = n;
        while(temp > 0){
            if(temp % 2 == 1){
                powers.push_back(x);
            }
            x *= 2;
            temp /= 2;
        }
        vector<int> ans(queries.size(), 0);
        for(int i = 0; i < queries.size(); i++){
            long long int temp = 1;
            for(int j = queries[i][0]; j <= queries[i][1]; j++){
                temp = ((temp%mod)*(powers[j]%mod))%mod;
            }
            ans[i] = temp;
        }
        return ans;
    }
};