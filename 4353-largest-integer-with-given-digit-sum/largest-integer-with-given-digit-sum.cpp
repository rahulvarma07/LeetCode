class Solution {
public:
    int doSum(int start, int end, int s) {
        int ans = -1;
        for(int i = start; i <= end; i++) {
            int num = i, sum = 0;
            while(num != 0) {
                sum += (num % 10);
                num /= 10;
            }
            if(sum == s) ans = i;
        }
        return ans;
    }
    int largestInteger(int n, int s) {
        if(n == 1) {
            return doSum(0, 9, s);
        }else if(n == 2) {
            return doSum(0, 99, s);
        }else if(n == 3) {
            return doSum(0, 999, s);
        }else if(n == 4) {
            return doSum(0, 9999, s);
        }else if(n == 5) {
            return doSum(0, 99999, s);
        }
        return -1;
    }
};