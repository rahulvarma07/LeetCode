class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxx = INT_MIN;
       int minn = prices[0];
       for(int i = 1; i < prices.size(); i++){
          int check = prices[i] - minn;
          maxx = max(maxx, check);
          minn = min(minn, prices[i]);
       } 
       if(maxx <= 0) return 0;
       return maxx;
    }
};