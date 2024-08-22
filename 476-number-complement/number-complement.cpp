class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int cnt = 0;
        while(num != 0){
            int n = num & 1;
            if(n == 0){
                ans += pow(2, cnt);
            }
            num = num >> 1;
            cnt ++;
        }
        return ans;
    }
};