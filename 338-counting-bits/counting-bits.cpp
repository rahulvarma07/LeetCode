class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>ans;
        ans.push_back(0);
        int count = 0;
        int num = 0;
        for(int i = 1;i <= n; i++)
        {
            count = 0;
            num = i;
            while(num > 0)
            {
                num = num & (num-1);
                count += 1;
            }
            ans.push_back(count);
        }
        return ans;    
    }
};