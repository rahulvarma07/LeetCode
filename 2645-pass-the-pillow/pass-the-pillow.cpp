class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int ans = 1;
        while(time > 0){
            while(time > 0 && ans <= n-1){
                ans += 1;
                time -= 1;
            }
            while(time > 0 && ans >= 2){
                ans -= 1;
                time -= 1;
            }
        }
        return ans;    
    }
};