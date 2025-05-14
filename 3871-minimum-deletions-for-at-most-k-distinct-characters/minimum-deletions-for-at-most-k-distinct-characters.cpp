class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int>mp;
        for(auto a:s){
            mp[a]++;
        }
        int n = mp.size();
        if(n == k) return 0;
        vector<int>cnt;
        for(auto a:mp){
            cnt.push_back(a.second);
        }
        sort(cnt.begin(), cnt.end());
        int ans = 0, i = 0;
        while(n > k){
            ans += cnt[i];
            i++;
            n--;
        }
        return ans;
    }
};