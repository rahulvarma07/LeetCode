class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       unordered_map<int, vector<int>> myMap;
       int ans = INT_MAX;
       for(int i = 0; i < nums.size(); i++) {
            myMap[nums[i]].push_back(i);
       } 
       for(auto a: myMap) {
            if(a.second.size() >= 3) {
                int i = 0, j = 1, k = 2;
                vector<int> temp = a.second;
                while(k < temp.size()) {
                    int absx = abs(temp[i] - temp[j]) + abs(temp[j] - temp[k]) + abs(temp[k] - temp[i]);
                    ans = min(ans, absx);
                    i++;
                    j++;
                    k++;
                }
            }
       }
       return (ans == INT_MAX) ? -1 : ans;
    }
};