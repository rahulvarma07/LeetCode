class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> arr1(n, n-1);
        vector<int> arr2(n, 0);
        stack<int> mSt;
        for(int i = 0; i < n; i++){
            arr1[i] -= i;
            while(!mSt.empty() && heights[i] < heights[mSt.top()]){
                arr1[mSt.top()] = (i - mSt.top()-1);
                mSt.pop(); 
            }
            mSt.push(i);
        }
        for(int i = n-1; i >= 0; i--){
            arr2[i] = i;
            while(!mSt.empty() && heights[i] < heights[mSt.top()]){
                arr2[mSt.top()] = (mSt.top()-i-1);
                mSt.pop(); 
            }
            mSt.push(i);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x = arr1[i]+arr2[i]+1;
            ans = max(ans, (x * heights[i]));
        }
        return ans;
    }
};