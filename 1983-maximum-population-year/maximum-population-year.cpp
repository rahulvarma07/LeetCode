class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
       vector<int>check(101, 0);
       for(int i = 0; i < logs.size(); i++){
        int x = logs[i][0], y = logs[i][1];
        check[x-1950] += 1;
        check[y-1950] -= 1;
       } 
       int sum = 0, maxx = 0, ind = 0;
       for(int i = 0; i < check.size(); i++){
        sum += check[i];
        if(sum > maxx){
            ind = i;
            maxx = sum;
        }
       }
       return 1950+ind;
    }
};