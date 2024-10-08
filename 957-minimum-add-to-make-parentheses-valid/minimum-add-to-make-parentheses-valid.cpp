class Solution {
public:
    int minAddToMakeValid(string s) {
        string str = "";
        for(auto a: s){
            if(str.size()>0 && a == ')' && str.back() == '('){
                str.pop_back();
            }
            else str += a;
        }
        return str.size();
    }
};