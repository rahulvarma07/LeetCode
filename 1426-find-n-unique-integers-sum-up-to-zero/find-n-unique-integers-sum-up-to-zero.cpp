class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int x = -1;
        for(int i = 0; i < n/2; i++){
            ans.push_back(x);
            x--;
        }
        x = (n%2 == 0) ? 1: 0;
        for(int i = n/2; i < n; i++){
            ans.push_back(x);
            x++;
        }
        return ans;
    }
};