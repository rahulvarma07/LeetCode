class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size(); // s size
        for(int i = 0; i < n; i++) {
            // if its opening brace -> place inside your stack 
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }else {
                // here we are getting close brace 
                if(st.empty()) return false;
                else if(s[i] == ')' && st.top() != '(') return false;
                else if(s[i] == ']' && st.top() != '[') return false;
                else if(s[i] == '}' && st.top() != '{') return false;
                else {
                    // valid
                    st.pop();
                }
            }
        }
        // if stack is empty -> true
        // else false 
        return st.empty();
    }
};