class Solution {
public:
    bool checkRange(int strt, int end, unordered_set<int> & mySet) {
        for(int i = strt; i <= end; i++) {
            if(mySet.count(i)) return false;
        }
        return true;
    }

    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> seats;
        for(auto &a : reservedSeats) {
            seats[a[0]].insert(a[1]);
        }
        long long int ans = (n - seats.size())*2;
        for(auto &a: seats) {
            bool p1 = checkRange(2, 5, a.second), p2 = checkRange(4, 7, a.second), p3 = checkRange(6, 9, a.second);
            if(p1 && p3) ans = ans + 2;
            else if(p1 || p2 || p3) ans = ans + 1;
        }
        return ans;
    }
};