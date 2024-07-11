class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ')' && s[i] != '('){
                str += s[i];
            }
            else if(s[i] == '(') st.push(str.size());
            else if(s[i] == ')'){
                reverse(str.begin()+st.top(), str.end());
                st.pop();
            }
        }
        return str;
    }
};