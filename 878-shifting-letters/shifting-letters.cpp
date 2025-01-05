class Solution {
public:
    char shift(char a, long long int s){
        int pos = (a - 'a' + s) % 26;
        if (pos < 0) pos += 26;
        return 'a' + pos;
    }
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        long long sum = 0;
        for(int i = n-1; i >= 0; i--){
            sum += shifts[i];
            s[i] = shift(s[i], sum);
        }
        return s;
    }
};