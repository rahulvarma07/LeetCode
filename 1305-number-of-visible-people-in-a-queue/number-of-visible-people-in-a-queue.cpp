class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n, 0);
        stack<int> mSt;
        for(int i = 0; i < n; i++){
            while(!mSt.empty() && heights[i] > heights[mSt.top()]){
                ans[mSt.top()] += 1;
                mSt.pop();
            }
            if(!mSt.empty()){
                ans[mSt.top()] += 1;
            }
            mSt.push(i);
        }
        return ans;
    }
};