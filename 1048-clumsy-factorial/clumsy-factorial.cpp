class Solution {
public:
    int clumsy(int n) {
        stack<int>st;
        string oper = "*/+-";
        int ans = 0;
        st.push(n);
        n--;
        int ind = 0;
        while(n >= 1){
            ind %= 4;
            if(oper[ind] == '*'){
                int x = st.top();
                st.pop();
                st.push(x*n);
            }
            else if(oper[ind] == '/'){
                int x = st.top();
                st.pop();
                st.push(x/n);
            }
            else if(oper[ind] == '+'){
                st.push(n);
            }
            else{
                st.push(-n);
            }
            n--;
            ind++;
        }
        while(!st.empty()){
            ans += st.top();
            cout << st.top() << " ";
            st.pop();
        }
        return ans;
    }
};