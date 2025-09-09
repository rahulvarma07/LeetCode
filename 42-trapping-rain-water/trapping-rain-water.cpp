class Solution {
public:
    int trap(vector<int>& height) {
        // 4 2 0 3 2 5 
        //     
        stack<int>mSt;
        int n = height.size();
        vector<int> maintain(n, 0);
        int ans = 0;
        for(int i = 0; i < n; i++){
            while(!mSt.empty() && height[i] >= height[mSt.top()]){
                int x = mSt.top();
                mSt.pop();
                for(int j = x+1; j < i; j++){
                    maintain[j] = (height[x]-height[j]);
                }
            }
            mSt.push(i);
        }
        while(!mSt.empty()) mSt.pop();
        for(int i = n-1; i >= 0; i--){
            while(!mSt.empty() && height[i] >= height[mSt.top()]){
                int x = mSt.top();
                mSt.pop();
                for(int j = x-1; j > i; j--){
                    maintain[j] = max(maintain[j], (height[x]-height[j]));
                }
            }
            mSt.push(i);
        }
        // 0 0 1 0 1 2 1 0 0 1 0 0
        // 0 0 1 0 1 1 1 0 0 1 0 0 
        for(auto a: maintain){
            ans += a;
        }
        return ans;
    }
};