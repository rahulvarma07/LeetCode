class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0;
        int ans = 0;
        unordered_map<int,int>check;
        for(auto a: banned) check[a]++;
        for(int i = 1; i <= n; i++){
            if(sum > maxSum) break;
            if(check[i] == 0 && sum < maxSum){
                sum += i;
                ans++;
            }
        }
        if(sum > maxSum) ans--;
        return ans;
    }
};