class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(auto a: nums) {
            int sum = 0, cnt = 0;
            for(int i = 1; i*i <= a; i++) {
                if(a % i == 0){
                    sum += i;
                    cnt++;
                    if(i * i != a) {
                    sum += (a / i);
                    cnt++;
                }
                }
            }
            if(cnt == 4) {
                ans += sum;
            }
        }
        return ans;
    }
};