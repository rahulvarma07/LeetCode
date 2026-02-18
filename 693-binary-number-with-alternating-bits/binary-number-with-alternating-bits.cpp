class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = -1;
        while(n > 0) {
            int curr = n%2;
            if(prev == -1){
                prev = curr;
            }else{
                if(curr == prev) return false;
            }
            prev = curr;
            n /= 2;
        }
        return true;
    }
};