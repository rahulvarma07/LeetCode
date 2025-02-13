class Solution {
public:
    int minOperations(vector<int>& nums, int k){
        priority_queue<long long int, vector<long long int>, greater<long long int>>minHeap; 
        int ans = 0;
        for(auto a:nums){
            minHeap.push(a);
        }
        if(minHeap.top() >= k) return ans;
        while(minHeap.size() >= 2 && minHeap.top() < k){
            long long int x = minHeap.top();
            minHeap.pop();
            long long int y = minHeap.top();
            minHeap.pop();
            long long int p = (min(x, y)*2+max(x,y));
            minHeap.push(p);
            ans++;
        }
        return ans;
    }
};