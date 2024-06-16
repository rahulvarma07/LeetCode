class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
       unordered_map<int, int> ans;
       long long count = 0;
       for(int i = 0; i < hours.size(); i++){
          hours[i] = hours[i] % 24;
       }
       for(int i = 0; i < hours.size(); i++){
           int rem = (24 - hours[i])%24;
           count += ans[rem];
           ans[hours[i]] += 1;
       }
       return count;
    }
};