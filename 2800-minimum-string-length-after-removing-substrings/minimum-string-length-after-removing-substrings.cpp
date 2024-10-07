class Solution {
public:
    int minLength(string s) {
        string str = s;
        int ans = INT_MAX;
        while(true){
            bool check = false;
            for(int i = 1; i < s.size(); i++){
                if(s[i-1] == 'A' && s[i] == 'B'){
                    s[i] = '*';
                    s[i-1] = '*';
                    check = true;
                }
                else if(s[i] == 'D' && s[i-1] == 'C'){
                    check = true;
                    s[i] = '*';
                    s[i-1] = '*';
                }
            }
            if(check == false) break;
            str = "";
            for(int i = 0; i < s.size(); i++){
                if(s[i] != '*') str += s[i];
            }
            s = str;
        }
        cout << s << " ";
        return s.size();
    }
};