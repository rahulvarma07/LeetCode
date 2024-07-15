class Solution {
public:
    string getSmallestString(string s) {
       for(int i = 1; i < s.size(); i++){
        if(s[i-1] > s[i] && (((s[i-1] - '0')&1) == ((s[i] - '0')&1))){
            swap(s[i-1], s[i]);
            return s;
        }
       }
       return s;
    }
};