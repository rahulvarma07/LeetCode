class Solution {
public:
    int countDiff(string s) {
        int i = 0, j = s.size()-1;
        int ans = 0;
        while(i <= j) {
            int op1 = min(abs(s[i] - s[j]), 26 - abs(s[i] - s[j]));
            ans += op1;
            i++;
            j--;
        }
        return ans;
    }
    int minOperations(string s) {
        int n = s.size();
        int ans = INT_MAX;
        int c = 0;
        while(n--) {
            ans = min(ans, countDiff(s)+c);
            reverse(s.begin(), s.end());
            reverse(s.begin(), s.end()-1);
            c++;
        }
        return ans;
    }
};