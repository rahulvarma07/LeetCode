class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>st(n, "hi");
        vector<int>ans(n, 0);
        for(int i = 1; i <= n; i++){
            st[i-1] = to_string(i);
        }
        sort(st.begin(), st.end());
        for(int i = 0; i < st.size(); i++){
            ans[i] = stoi(st[i]);
        }
        return ans;
    }
};