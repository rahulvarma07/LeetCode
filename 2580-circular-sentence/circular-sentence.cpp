class Solution {
public:
    bool isCircularSentence(string s) {
        if(s.size() == 1) return true;
        s += ' ';
        bool ans = true;
        string str = "";
        char ch;
        for(int i = 0; i < s.size(); i++){
            char a = s[i];
            if(a == ' '){
                ch = str.back();
                str = "";
                continue;
            }
            str += a;
            if((i != 0) && (s[i-1] == ' ')){
                if(ch != s[i]) return false;
            }
            cout << ch << " ";
        }
        if(ch != s[0]) return false;
        return true;
    }
};