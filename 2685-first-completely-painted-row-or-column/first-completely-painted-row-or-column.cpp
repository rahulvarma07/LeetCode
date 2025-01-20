class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int, pair<int,int>>mp;
        unordered_map<int,int>row;
        unordered_map<int,int>col;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                mp[mat[i][j]] = {i, j};
            }
        }
        for(int i = 0; i < arr.size(); i++){
            pair<int, int>p = mp[arr[i]];
            int a = p.first;
            int b = p.second;
            row[a]++;
            col[b]++;
            if(row[a] == mat[0].size()) return i;
            else if(col[b] == mat.size()) return i;
        }
        return -1;
    }
};