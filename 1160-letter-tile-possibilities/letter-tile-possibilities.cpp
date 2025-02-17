class Solution {
public:
    int fact(int num){
        int ans = 1;
        for(int i = 1; i <= num; i++){
            ans *= i;
        }
        return ans;
    }
    void compute(int ind, string str, string &tiles, int &ans){
        if(ind >= tiles.size()){
            int n = str.size();
            if(n == 0) return;
            unordered_map<char, int>check;
            for(auto a: str) check[a]++;
            int den = 1, num = 1;
            num = fact(n);
            for(auto a: check){
                den *= fact(a.second);
            }
            ans += (num/den);
            return;
        }
        else{
            str += tiles[ind];
            compute(ind+1, str, tiles, ans);
            str.pop_back();
            while(ind+1 < tiles.size() && tiles[ind] == tiles[ind+1]){
                ind++;
            }
            compute(ind+1, str, tiles, ans);
        }
    }
    int numTilePossibilities(string tiles){
        sort(tiles.begin(), tiles.end());
        string str = "";
        int ans = 0;
        compute(0, str, tiles, ans);
        return ans;
    }
};