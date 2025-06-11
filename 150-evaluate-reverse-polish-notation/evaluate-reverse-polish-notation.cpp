class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int>st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i][0] == '*'){
                int ans1 = st.top();
                st.pop();
                int ans2 = st.top();
                st.pop();
                st.push(ans2*ans1);
            }
            else if(tokens[i][0] == '/'){
                int ans1 = st.top();
                st.pop();
                int ans2 = st.top();
                st.pop();
                st.push(ans2/ans1);
            }
            else if(tokens[i][0] == '+'){
                int ans1 = st.top();
                st.pop();
                int ans2 = st.top();
                st.pop();
                st.push(ans2+ans1);
            }
            else if(tokens[i][0] == '-' && tokens[i].size() == 1){
                int ans1 = st.top();
                st.pop();
                int ans2 = st.top();
                st.pop();
                st.push(ans2-ans1);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};