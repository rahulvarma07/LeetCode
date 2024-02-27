class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int left = 0;
        int right = grid.size()-1;
        int count = 0;
        int mid = 0;
        for(int i=0;i<grid.size();i++)
        {
            left = 0;
            right = grid[i].size();
            while(left < right)
            {
            mid = (left + right)/2;
            if(grid[i][mid] >= 0)
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
            }
            count += (grid[i].size()-left);
        }
        return count;
    }
};
