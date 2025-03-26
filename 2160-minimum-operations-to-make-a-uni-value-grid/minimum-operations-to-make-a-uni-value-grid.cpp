class Solution {
public:
    int findMin(vector<int>&check, int x){
        int n = check.size();
        int mid = check.size()/2;
        int finalAns = 0;
        int elem = check[mid];
        for(int i = 0; i < check.size(); i++){
            int diff = abs(elem-check[i]);
            if(diff%x != 0) return -1;
            finalAns += (diff/x);
        }
        return finalAns;
    }

    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>check;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                check.push_back(grid[i][j]);
            }
        }
        sort(check.begin(), check.end());
        return findMin(check, x);
    }
};