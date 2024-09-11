class Solution {
public:
    int minBitFlips(int start, int end) {
        // 1010
        // 0111
        int ans = 0;
        while(start > 0 || end > 0){
            if((start&1) != (end&1)) ans++;
            start = start>>1;
            end = end>>1;
        }
        return ans;
    }
};