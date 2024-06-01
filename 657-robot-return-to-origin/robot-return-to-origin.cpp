class Solution {
public:
    bool judgeCircle(string moves) {
       int countu =0;
       int countd =0;
       int countl = 0;
       int countr =0;
       for(int i = 0; i < moves.size(); i++)
       {
        if(moves[i] == 'L') countl += 1;
        else if(moves[i] == 'R') countr += 1;
        else if(moves[i] == 'U') countu += 1;
        else countd += 1;
       }
       if(countr == countl and countu == countd) return true;
       return false;
    }
};