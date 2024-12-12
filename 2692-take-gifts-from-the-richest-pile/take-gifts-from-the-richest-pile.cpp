class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<int>pq;
        for(auto a: gifts) pq.push(a);
        while(k--){
            int x = pq.top();
            pq.pop();
            pq.push(sqrt(x));
        }
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};