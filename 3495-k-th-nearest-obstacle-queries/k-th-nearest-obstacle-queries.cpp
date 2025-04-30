class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue<int>pq;
        vector<int>ans;
        for(int i = 0; i < queries.size(); i++){
            int x = queries[i][0], y = queries[i][1];
            int sum = abs(x)+abs(y);
            pq.push(sum);
            while(pq.size() > k) pq.pop();
            if(pq.size() < k){
                ans.push_back(-1);
                continue;
            }
            ans.push_back(pq.top());
        }    
        return ans;
    }
};