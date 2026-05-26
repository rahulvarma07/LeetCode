class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> mySet;
        int ans = 0;
        for(auto a: word) {
            mySet.insert(a);
        }
        for(auto a: mySet) {
            if(a >= 'a' && a <= 'z') {
                char ch = 'A' + (a - 'a');
                if(mySet.find(ch) != mySet.end()) ans++;
            }
        }
        return ans;
    }
};