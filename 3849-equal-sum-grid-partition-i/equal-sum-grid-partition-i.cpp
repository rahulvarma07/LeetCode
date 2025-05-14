class Solution {
public:
    bool check(vector<long long int>vec){
        long long int sum = 0;
        vector<long long int>suff = vec;
        for(int i = suff.size()-2; i >= 0; i--){
            suff[i] += suff[i+1];
        }
        for(int i = 0; i < vec.size()-1; i++){
            sum += vec[i];
            if(sum == suff[i+1]) return true;
        }
        return false;
    }

    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long int>hor, ver;
        for(int i = 0; i < grid.size(); i++){
            long long int sum = 0;
            for(int j = 0; j < grid[i].size(); j++){
                sum += grid[i][j];
            }
            hor.push_back(sum);
        }
        for(int i = 0; i < grid[0].size(); i++){
            long long int sum = 0;
            for(int j = 0; j < grid.size(); j++){
                sum += grid[j][i];
            }
            ver.push_back(sum);
        }
        return (check(hor) || check(ver));
    }
    // 1 4 //00 10 20 
    // 2 3 //01 11 12
    // 2 3
};