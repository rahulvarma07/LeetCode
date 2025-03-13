class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n, 0);
        for(int i = 0; i < bookings.size(); i++){
            int f = bookings[i][0], l = bookings[i][1], s = bookings[i][2];
            ans[f-1] += s;
            if(l < ans.size()) ans[l] -= s;
        }
        for(int i = 1; i < ans.size(); i++){
            ans[i] += ans[i-1];
        }
        return ans;
    }
};