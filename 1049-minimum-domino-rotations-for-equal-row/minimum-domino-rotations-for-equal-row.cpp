class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans = INT_MAX;
        for(int x = 1; x <= 6; x++){
            vector<int>t = tops;
            int cnt = 0;
            bool flag = true;
            for(int i = 0; i < tops.size(); i++){
                if(t[i] != x && bottoms[i] == x){
                    cnt++;
                    t[i] = x;
                }
                else if(t[i] != x && bottoms[i] != x){
                    flag = false;
                    break;
                }
            }
            // cout << x << " " << cnt << endl;
            if(flag) ans = min(ans, cnt);
        }
        for(int x = 1; x <= 6; x++){
            vector<int>t = bottoms;
            int cnt = 0;
            bool flag = true;
            for(int i = 0; i < tops.size(); i++){
                if(t[i] != x && tops[i] == x){
                    cnt++;
                    t[i] = x;
                }
                else if(t[i] != x && tops[i] != x){
                    flag = false;
                    break;
                }
            }
            // cout << x << " " << cnt << endl;
            if(flag) ans = min(ans, cnt);
        }
        return ans != INT_MAX? ans : -1;
    }
};