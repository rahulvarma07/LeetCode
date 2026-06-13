class Solution {
public:
    long long int pow(int x, int y) {
        if(y == 0) return 1;
        if(y == 1) return x;
        long long int p = pow(x, y/2);
        if(y%2 == 0) return p*p;
        return p*p*x;
    }
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int c = 0;
        while(n > 0) {
            int rem = n%10;
            int x = rem * pow(10, c);
            if(x != 0) ans.push_back(x);
            c++;
            n /= 10;
        }    
        reverse(ans.begin(), ans.end());
        return ans;                                                    
    } 
};