class Solution {
public:
    int longestConsecutive(vector<int>& data) {
        int n = data.size();
        if(n == 0) return 0;
        unordered_set<int> st;
        int ans = 1;
        for(auto a: data) st.insert(a);
        for(auto a: st){
            if(st.find(a-1) == st.end() ){
                int elem = a;
                int cnt = 1;
                while(st.find(elem+1) != st.end()){
                    cnt += 1;
                    elem += 1;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};