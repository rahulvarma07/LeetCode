class Solution {
public:
    bool checkBlack(int x, int y) {
        if(x%2 != 0) {
            return (y%2 == 0);
        }else {
            return (y%2 == 1);
        }
    }
    int minBishopMoves(vector<int>& s, vector<int>& t) {
        if(abs(s[0]-t[0]) == abs(s[1]-t[1])) return 1;
        if(checkBlack(s[0], s[1]) == checkBlack(t[0], t[1])) return 2;
        return -1;
    }
};