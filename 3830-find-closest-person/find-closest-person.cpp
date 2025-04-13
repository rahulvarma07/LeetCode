class Solution {
public:
    int findClosest(int x, int y, int z) {
        int m = abs(x-z), n = abs(y-z);
        if(m == n) return 0;
        else if(m < n) return 1;
        return 2;
    }
};