class Solution {
public:
    /*
    Take the minimum element... from left -> Right..

    */
    int maxProfit(vector<int>& prices) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int minn = prices[0];
        int profit = 0;
        int maxx = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            profit = prices[i] - minn;
            maxx = max(maxx, profit);
            minn = min(minn, prices[i]);
        }
        return maxx;
    }
};