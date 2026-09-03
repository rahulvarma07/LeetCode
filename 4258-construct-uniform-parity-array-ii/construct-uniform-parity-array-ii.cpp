class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX, minEven = INT_MAX;
        int oddCnt = 0, evenCnt = 0;
        for(auto a: nums1) {
            if(a % 2 == 0) {
                minEven = min(minEven, a);
                evenCnt++;
            }
            else {
                minOdd = min(minOdd, a);
                oddCnt++;
            }
        }
        if(oddCnt == 0 || evenCnt == 0) return true;
        if(minEven-minOdd >= 1) return true;
        return false;
    }
};