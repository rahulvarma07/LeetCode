class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> frequency;
        for(auto a : s){
            frequency[a] ++;
        }
        for(int i = 0; i < s.size(); i++){
            if(frequency[s[i]] == 1) return i;
        }
        return -1;
    }
};