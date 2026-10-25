class Solution {
    int countSetBits(int n) {
        int c = 0;
        while(n > 0) {
            c += (n % 2);
            n /= 2;
        }
        return c;
    }
    public int calculateScore(int a, int b) {
        int x = countSetBits(a), y = countSetBits(b);
        if(x >= y) return x * y;
        else return y / x;
    }
}