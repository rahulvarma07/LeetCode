class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> seats;
        for(auto &a : reservedSeats) {
            seats[a[0]].insert(a[1]);
        }
        long long int ans = (n - seats.size())*2;
        for(auto &a: seats) {
            bool p1 = true, p2 = true, p3 = true;
            // p1 && p3 == > 2
            // p1 || p2 || p3
            for(int i = 2; i <= 5; i++) {
                if((a.second.count(i))) {
                    p1 = false;
                }
            }
            for(int i = 4; i <= 7; i++) {
                if((a.second.count(i))) {
                    p2 = false;
                }
            }
            for(int i = 6; i <= 9; i++) {
                if((a.second.count(i))) {
                    p3 = false;
                }
            }
            if(p1 && p3) ans = ans + 2;
            else if(p1 || p2 || p3) ans = ans + 1;
        }
        return ans;
    }
};