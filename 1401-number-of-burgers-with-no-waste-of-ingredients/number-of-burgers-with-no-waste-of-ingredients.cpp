class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices % 2 != 0) return {};
        if(tomatoSlices == 0 && cheeseSlices == 0) return {0, 0};
        vector<int>ans(2, 0);
        int x = 0;
        while((tomatoSlices / 2) > cheeseSlices){
            tomatoSlices -= 4;
            cheeseSlices -= 1;
            x++;
        }   
        if(tomatoSlices > cheeseSlices && tomatoSlices/2 == cheeseSlices){
            return {x, (tomatoSlices/2)};
        }
        return {};
    }
};