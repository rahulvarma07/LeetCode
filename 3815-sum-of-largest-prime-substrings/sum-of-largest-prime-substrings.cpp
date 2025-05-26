class Solution {
public:
    bool isPrime(string s){
        long long int x = stol(s);
        if(x == 1) return false;
        if(x <= 3) return true;
        int n = sqrt(x);
        for(int i = 2; i <= n; i++){
            if(x%i == 0) return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        map<long long int, int>p;
        for(int i = 0; i < s.size(); i++){
            string str = "";
            for(int j = i; j < s.size(); j++){
                str += s[j];
                if(isPrime(str)){
                    long long int n = stol(str);
                    p[n]++;
                }
            }
        }
        int n = p.size();
        long long int ans = 0;
        for(auto a:p){
            if(n <= 3){
                ans += a.first;
            }
            n--;
        }
        return ans;
    }
};