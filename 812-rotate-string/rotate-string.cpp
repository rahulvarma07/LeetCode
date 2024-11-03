class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            char ch = goal.back();
            goal.pop_back();
            str = ch+goal;
            goal = str;
            if(s == goal) return true;
        }
        return false;
    }
};