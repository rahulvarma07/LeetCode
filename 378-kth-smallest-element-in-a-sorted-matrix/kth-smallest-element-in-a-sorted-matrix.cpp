class Comparator {
public:
    bool operator()(vector<int>&a, vector<int>&b) {
        return a[0] > b[0];
    }
};

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // [1,5,9]
        // [10,11,13]
        // [12,13,15]

        int n = matrix.size();
        priority_queue<vector<int>, vector<vector<int>>, Comparator> pq;
        for(int i = 0; i < n; i++) {
            pq.push({matrix[i][0], i, 0});
        }
        int ans;
        while(!pq.empty() && k--) {
            vector<int> v = pq.top();
            pq.pop();
            ans = v[0];
            int curr = v[2], len = matrix[v[1]].size();
            if(curr+1 < len) {
                pq.push({matrix[v[1]][curr+1], v[1], curr+1});
            }
        }
        return ans;
    }
};