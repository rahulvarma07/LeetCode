class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = 0;
        int c = 0;
        for (int i=0;i<accounts.size();i++)
        {
            c = 0;
            for (int j=0;j<accounts[0].size();j++)
            {
                c += accounts[i][j];
            }
            m=max(m,c);
        }
     return m;  
    }
};