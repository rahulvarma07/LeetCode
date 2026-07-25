class Solution {
public:
    char findTheDifference(string s, string t) {
        int x = 0;
        for(auto a: s) x = x ^ a;
        for(auto a: t) x = x ^ a;
        return x;
    }
};