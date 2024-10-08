class Solution {
public:
    int minSwaps(string s) {
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(str.size()>0 && s[i] == ']' && str.back() == '['){
                str.pop_back();
            }
            else str += s[i];
        }
        int n = str.size()/2;
        if(n%2 != 0) return ((n+1)/2);
        return (n/2);
    }
};