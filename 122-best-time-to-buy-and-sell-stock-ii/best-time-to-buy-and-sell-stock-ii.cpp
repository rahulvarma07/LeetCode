class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int stock = prices[0];
      int ans = 0;
      for(int i = 1; i < prices.size(); i++){
         if(prices[i] > stock){
            ans += abs(stock - prices[i]);
            stock = prices[i];
         }
         else{
            stock = prices[i];
         }
      }  
      return ans;
    }
};