class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int ans = INT_MAX;
        for(int i = 0; i < position.size(); i++) {
            int cp = position[i], cost = 0;
            for(int j = 0; j < position.size(); j++) {
                int pp = position[j];
                if(abs(pp-cp) % 2 != 0) cost++;
            }
            ans = min(ans, cost);
        }
        return ans;
    }
};