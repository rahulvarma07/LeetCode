class Solution {
public:
    long long int sumations(long long int num, long long int p) {
        if (p < 4) return 0;
        long long int pw = (long long)pow(10, p - 1);
        long long int commas = (num - pw + 1) * ((p - 1) / 3);
        return sumations(pw-1, p - 1) + commas;
    }

    long long countCommas(long long n) {
        long long int num = n;
        long long int p = 0;
        while (num != 0) {
            p++;
            num /= 10;
        }
        return sumations(n, p);
    }
};