class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int sum = 0;
        int sum1 = 0;
        int double_element = 0;
        unordered_map<int,int> ans;
        vector<int>checkk (2,0);
        for(int i = 0; i < grid.size(); i ++)
        {
            for(int j = 0; j < grid[i].size(); j ++)
            {
                ans[grid[i][j]] += 1;
            }
        }
        int maxx = 0;
        for(auto a:ans)
        {
            sum += a.first;
            maxx = max(maxx,a.first);
            if(a.second >= 2) double_element = a.first;
        }
        cout << sum;
        cout << endl;
        checkk[0] = double_element;
        sum1 = (maxx *(maxx + 1) / 2);
        cout << sum1 << " " << maxx;
        checkk[1] = (sum1 - sum); 
        if(sum == sum1) checkk[1] = maxx + 1; 
        return checkk;
    }
};