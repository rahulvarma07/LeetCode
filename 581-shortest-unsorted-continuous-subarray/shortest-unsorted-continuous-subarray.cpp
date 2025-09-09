class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        stack<int> mSt;
        int minnBoundary = INT_MAX, maxxBoundary = INT_MIN;
        for(int i = 0; i < n; i++){
            while(!mSt.empty() && nums[i] < nums[mSt.top()]){
                minnBoundary = min(minnBoundary, mSt.top());
                maxxBoundary = max(maxxBoundary, i);
                mSt.pop();
            }
            mSt.push(i);
        }
        for(int i = n-1; i >= 0; i--){
            while(!mSt.empty() && nums[i] > nums[mSt.top()]){
                minnBoundary = min(minnBoundary, i);
                maxxBoundary = max(maxxBoundary, mSt.top());
                mSt.pop();
            }
            mSt.push(i);
        }
        if(minnBoundary == INT_MAX) return 0;
        return (maxxBoundary - minnBoundary)+1;
    }
};