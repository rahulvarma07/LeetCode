class Solution {
public:
    vector<int>rank;

    void makeParent(vector<int>& parent){
        for(int i = 0; i < parent.size(); i++){
            parent[i] = i;
        }
    }

    int findParent(int child, vector<int>&parent){
        if(child != parent[child]){
            parent[child] = findParent(parent[child], parent);
        }
        return parent[child];
    }

    bool setRank(int val1, int val2, vector<int>&parent){
        if(val1 == val2){
            return true;
        }
        else if(rank[val1] > rank[val2]){
            parent[val2] = val1;
        }
        else{
            parent[val1] = val2;
            if(rank[val1] == rank[val2]){
                rank[val1]++;
            }
        }
        return false;
    }

    bool find(int x, int y, vector<int>&parent){
        int xFind = findParent(x, parent);
        int yFind = findParent(y, parent);
        return setRank(xFind, yFind, parent);
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>ans;
        int n = edges.size();
        vector<int>parent(n+1, 0);
        rank.resize(n+1, 0);
        makeParent(parent);
        for(int i = 0; i < n; i++){
            int x = edges[i][0], y = edges[i][1];
            bool isCycle = find(x, y, parent);
            if(isCycle){
                ans = edges[i];
            }
        }
        return ans;
    }
};