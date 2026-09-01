class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            vector<int> pref(n, 0), suff(n, 0);
            int pg = 0, sg = 0;
            for(int j = 0; j < n; j++) {
                if(j != i) {
                    pg = gcd(pg, nums[j]);
                }
                pref[j] = pg;
            }
            for(int j = n-1; j >= 0; j--) {
                if(j != i) {
                    sg = gcd(sg, nums[j]);
                }
                suff[j] = sg;
            }
            int cnt = 0;
            for(int j = 1; j < n; j++) {
                if(j != i) {if(pref[j-1] == suff[j]) cnt++;}
            }
            ans = max(ans, cnt);
        }
        vector<int> pref(n, 0), suff(n, 0);
        int pg = 0, sg = 0;
        for(int j = 0; j < n; j++) {
            pg = gcd(pg, nums[j]);
            pref[j] = pg;
        }
        for(int j = n-1; j >= 0; j--) {
            sg = gcd(sg, nums[j]);
            suff[j] = sg;
        }
        int cnt = 0;
        for(int j = 1; j < n; j++) {
            if(pref[j-1] == suff[j]) cnt++;
        }
        return max(ans, cnt);
    }
};