class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int ac = 0, bc = 0;
        for(auto a: s) {
            if(a == 'a') ac++;
            else bc++;
        }
        return abs(ac - bc);
    }
};