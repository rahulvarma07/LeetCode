class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int a = 1, b = 2;
        int cnt = 2;
        while(true){
            cnt++;
            int c = a+b;
            a = b, b = c;
            if(cnt == n) return c;
        }
        return -1;
    }
};