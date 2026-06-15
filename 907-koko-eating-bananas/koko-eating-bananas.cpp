class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 0;
        for(auto a: piles) {
            r = max(a, r);
        }
        while(l <= r) {
            int m = (l + r)/2;
            long long int sum = 0;
            for(auto a: piles) {
                sum += ceil(a/(m*1.0));;
            }
            if(sum <= h) r = m-1;
            else l = m+1;
        }
        return l;
    }
};