class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>mypq;
        for(auto a: piles) mypq.push(a);
        while(k--){
            double x = floor((double)((mypq.top())/2));
            int y = mypq.top() - (int)(x);
            mypq.pop();
            mypq.push(y);
        }
        int ans = 0;
        while(!mypq.empty()){
            ans += mypq.top();
            mypq.pop();
        }
        return ans;
    }
};