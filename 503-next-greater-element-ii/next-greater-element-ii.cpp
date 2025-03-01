class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& data) {
        int n = data.size();
        vector<int>ans(n, -1);
        stack<int>st;
        st.push(data[n-1]);
        for(int i = n-2; i >= 0; i--){
            if(st.empty()){
                st.push(data[i]);
                continue;
            }
            while(!st.empty() && st.top() <= data[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(data[i]);
        }
        for(int i = n-1; i >= 0; i--){
            if(st.empty()){
                st.push(data[i]);
                continue;
            }
            while(!st.empty() && st.top() <= data[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(data[i]);
        }
        return ans;
    }
};