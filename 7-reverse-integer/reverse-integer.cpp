class Solution {
public:
    int reverse(int n) {
        long long int rev = 0;
        while(n != 0) {
            int rem = (n % 10);
            rev = (rev * 10) + rem;
            if(rev > INT_MAX || rev < INT_MIN) return 0;
            n /= 10;
        }
	    return rev;
    }
};