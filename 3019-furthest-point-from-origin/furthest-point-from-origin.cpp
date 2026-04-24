class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntR = 0, cntL = 0, cntS = 0;
        for(auto a: moves) {
            if(a == 'L') cntL++;
            else if(a == 'R') cntR++;
            else cntS++;
        }
        return (max(cntR, cntL)-min(cntR, cntL))+cntS;
        
    }
};