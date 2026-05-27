class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> freqOfSmalls;
        unordered_map<char, int> check;
        int ans = 0;
        for(auto a: word) {
            if(a >= 'a' && a <= 'z') freqOfSmalls[a]++;
        }
        for(auto a: word) {
            if(a >= 'a' && a <= 'z') {
                check[a]++;
            }else{
                char ch = 'a' + (a - 'A');
                if(check.find(a) == check.end()) {
                    if(freqOfSmalls.find(ch) != freqOfSmalls.end()) {
                        if(check[ch] == freqOfSmalls[ch]) {
                            ans++;
                        }
                    }
                    check[a]++;
                }
            }
        }
        return ans;
    }
};