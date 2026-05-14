class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, less<int>> pq;
        for(auto a: nums) {
            pq.push(a);
        }
        int ans;
        while(k--){
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};