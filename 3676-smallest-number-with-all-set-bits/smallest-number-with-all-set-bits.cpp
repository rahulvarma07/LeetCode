class Solution {
public:
    int smallestNumber(int n) {
        string str = "";
        int ans = 0;
        while(n){
            str += (n%2 + '0');
            n /= 2;
        }
        int p = 0;
        for(int i = str.size()-1; i >= 0; i--){
            ans += pow(2,p);
            p++;
        }
        return ans;
    }
};