class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int rev = 0;
        while(temp > 0) {
            int rem = temp % 10;
            rev = (rev * 10) + rem;
            temp /= 10;
        }
        return abs(n - rev);
    }
};