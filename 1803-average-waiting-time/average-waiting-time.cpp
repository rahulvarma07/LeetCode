class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        int fw = c[0][1] + c[0][0];
        double ans = c[0][1];
        for(int i = 1; i < c.size(); i++){
            if(fw >= c[i][0]){
                fw += c[i][1];
            }
            else{
                fw = c[i][0] + c[i][1];
            }
            ans += (fw - c[i][0]);
            cout << fw << " ";
        }
        return ans/c.size();
    }
};