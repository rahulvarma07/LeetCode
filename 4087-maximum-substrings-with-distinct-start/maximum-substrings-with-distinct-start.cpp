class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, bool> myMap;
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(myMap[s[i]] == false){
                ans++;
                myMap[s[i]] = true;
            }
        }
        return ans;
    }
};