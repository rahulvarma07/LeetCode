class Solution {
public:
    bool checkString(string s) {
        bool isB = false;
        for(auto a: s) {
            if(a == 'a') {
                if(isB) return false;
            }
            else {
                if(a == 'b') {
                    isB = true;
                }
            }
        }
        return true;
    }
};