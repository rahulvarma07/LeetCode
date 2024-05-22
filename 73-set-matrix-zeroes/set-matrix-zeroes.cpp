class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<int>row;
        vector<int>coloum;
        for (int i = 0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if (matrix[i][j] == 0)
                {
                  row.push_back(i);
                  coloum.push_back(j);  
                }
            }
        }
        for (int i=0;i<row.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[row[i]][j] = 0;
            }
            for(int a=0;a<matrix.size();a++)
            {
                matrix[a][coloum[i]]=0;
            }
        }
    
    }
};