class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> mSt;
        for(int i = 0; i < n; i++){
            while(!mSt.empty() && temp[mSt.top()] < temp[i]){
                int x = mSt.top();
                mSt.pop();
                ans[x] = (i - x);
            }
            mSt.push(i);
        }
        return ans;
    }
};