class Solution {
public:
    int fin(int n)
    {
        if(n <= 1) return n;
        return fin(n - 1) + fin(n - 2);
    }
    int fib(int n) {
       int ans =  fin(n);
       return ans;
    }
};