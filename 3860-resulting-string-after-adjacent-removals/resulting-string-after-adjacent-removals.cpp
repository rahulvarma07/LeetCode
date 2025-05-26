class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            if(st.size() == 0){
                st.push(s[i]);
            }
            else{
                if(s[i] == 'a' && st.top() == 'z' || s[i] == 'z' && st.top() == 'a'){
                    st.pop();
                    continue;
                }
                else{
                    char ch1 = s[i]-1, ch2 = s[i]+1;
                    if(st.top() == ch1 || st.top() == ch2){
                        st.pop();
                        continue;
                    }
                }
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};