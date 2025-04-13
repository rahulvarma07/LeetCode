class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        for(int i = 0; i < f.size(); i++){
            if(f[i] == 1) continue;
            else{
                if(i != 0 && f[i-1] == 1 || i != f.size()-1 && f[i+1] == 1) continue;
                n--;
                f[i] = 1;
            }
        }
        return n<=0;
    }
};