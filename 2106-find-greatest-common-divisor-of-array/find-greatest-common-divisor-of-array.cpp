class Solution {
public:
    int GCD(int a, int b){
        while(a != 0){
            int temp = a;
            a = b%a;
            b = temp;
        }
        return b;
    }
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(auto a:nums) {
            mx = max(mx, a);
            mn = min(mn, a);
        }
        if(mx % mn == 0) return mn;
        return GCD(mn, mx);
    }
};