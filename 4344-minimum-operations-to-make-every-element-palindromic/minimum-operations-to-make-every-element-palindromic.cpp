#define ll long long
class Solution {
public:
    static vector<ll> evens;   
    static vector<ll> odds;  
    static bool built;        

    void palindromes() {
        if(built) return;      // fix: skip if already generated in a prior test case
        for(int i = 1; i <= 100000; i++) {
            string str = to_string(i);
            string r = str;
            reverse(r.begin(), r.end());
            ll p1 = stoll(str.substr(0, str.size()-1) + r);
            ll p2 = stoll(str + r);
            if(p1%2 == 0) {
                evens.push_back(p1);
            }else {
                odds.push_back(p1);
            }

            if(p2%2 == 0) evens.push_back(p2);
            else odds.push_back(p2);
        }
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());
        evens.erase(unique(evens.begin(), evens.end()), evens.end());
        odds.erase(unique(odds.begin(), odds.end()), odds.end());
        built = true;     
    }

    ll minDiff(ll num, vector<ll> &palindromes) {
        int l = 0, h = palindromes.size()-1;
        ll lb = LLONG_MAX, ub = LLONG_MAX;
        while(l <= h) {
            int m = l + (h-l)/2;
            if(palindromes[m] <= num) {
                lb = palindromes[m];
                l = m+1;
            }else h = m - 1;
        }
        l = 0, h = palindromes.size()-1;
        while(l <= h) {
            int m = l + (h-l)/2;
            if(palindromes[m] >= num) {
                ub = palindromes[m];
                h = m-1;
            }else {
                l = m+1;
            }
        }
        return min((ub - num)/2, (num - lb)/2);
    }

    long long minOperations(vector<int>& nums) {
        palindromes();
        ll ans = 0;
        for(auto a : nums) {
            if(a%2 == 0) {
                ans = ans + minDiff(a, evens);
            }else {
                ans = ans + minDiff(a, odds);
            }
        }
        return ans;
    }
};

// Out-of-class definitions required for static members:
vector<ll> Solution::evens;
vector<ll> Solution::odds;
bool Solution::built = false;