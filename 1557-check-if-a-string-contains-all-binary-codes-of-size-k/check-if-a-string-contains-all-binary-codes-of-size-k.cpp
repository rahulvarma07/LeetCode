class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size() < k) return false;
        set<string> mySet;
        for(int i = 0; i <= s.size()-k; i++){
            string str = "";
            for(int j = i; j < i+k; j++){
                str += s[j];
            }
            mySet.insert(str);
        }
        long long p = pow(2, k);
        return (mySet.size() == p);
    }
};