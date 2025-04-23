class Solution {
public:
    int countLargestGroup(int n) {
        int maxx = 0;
        unordered_map<int,int>mp;
        for(int i = 1; i <= n; i++){
            int sum = 0;
            int x = i;
            while(x > 0){
                sum += (x%10);
                x /= 10;
            }
            mp[sum]++;
            maxx = max(maxx, mp[sum]);
        }
        int ans = 0;
        for(auto a:mp){
            if(a.second == maxx) ans++;
        }
        return ans;
    }
};