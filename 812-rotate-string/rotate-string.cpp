class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        if(s == goal) return true;
        int n = s.size();
        string str = "";
        while(n--){
            char ch = s.back();
            s.pop_back();
            str = ch+s;
            if(str == goal) return true;
            s = str;
            str = "";
        }
        return false;
    }
};