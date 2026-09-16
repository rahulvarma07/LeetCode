#define ll long long int

class Solution {
public:

    ll makePalindrome(ll firstHalf, bool isEven) {
        ll pal = firstHalf;
        if(!isEven) {
            firstHalf /= 10;
        }
        while(firstHalf > 0) {
            int d = firstHalf % 10;
            pal = (pal * 10) + d;
            firstHalf /= 10;
        }
        return pal;
    }
    string nearestPalindromic(string s) {
        int n = s.size();
        int mid = n / 2;
        int halfLength = (n % 2 == 0 ? mid : mid+1);

        ll firstHalf = stol(s.substr(0, halfLength));
        ll powerNumber = 1;
        for(int i = 1; i <= n; i++) {
            powerNumber *= 10;
        }
        
        vector<ll> closestPalindrome;
        closestPalindrome.push_back(makePalindrome(firstHalf, (n%2 == 0))); // making mirror of frst half
        closestPalindrome.push_back(makePalindrome(firstHalf+1, (n%2 == 0))); // next closest
        closestPalindrome.push_back(makePalindrome(firstHalf-1, (n%2 == 0))); // prev closest
        closestPalindrome.push_back((powerNumber + 1)); // to handl 9 99 999 cases
        closestPalindrome.push_back(powerNumber/10 - 1); // to handle 10001 like that cases

        ll minDiff = LLONG_MAX;
        ll res = -1;
        ll num = stol(s);


        for(ll a: closestPalindrome) {
            if(a != num) {
                if(minDiff > abs(num - a)) {
                    minDiff = abs(num - a);
                    res = a;
                }else if(minDiff == abs(num - a)) {
                    res = min(res, a);
                }
            }
        }

        return to_string(res);
    }
};