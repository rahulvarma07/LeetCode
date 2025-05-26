class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans = 0, mo = 0;
        map<string, int>mp;
        for(auto a:words){
            string r = a;
            reverse(r.begin(), r.end());
            if(mp.find(r) != mp.end()){
                ans += 2;
                mp[r]--;
                if(mp[r] == 0) mp.erase(r);
                continue;
            }
            mp[a]++;
        }
        for(auto a:mp){
            if(a.first[0] == a.first[1]){
                mo = max(mo, a.second);
            }
        }
        ans += mo;
        return ans*2;
    }
};