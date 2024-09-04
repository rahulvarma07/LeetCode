class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<int>ans(2, 0);
        int res = 0;
        map<vector<int>, int>mymap;
        for(auto a:obstacles) mymap[a] = 1;
        int x = 1;
        for(int i = 0; i < commands.size(); i++){
            if(commands[i] == -1){
                x += 1;
                if(x > 4){
                    x = 1;
                }
            }
            else if(commands[i] == -2){
                x -= 1;
                if(x <= 0){
                    x = 4;
                }
            }

            else{
                int ind = x%2;
                for(int j = 1; j <= abs(commands[i]); j++){
                    if(x == 1 || x == 2){
                        ans[ind] ++;
                        if(mymap.find(ans) != mymap.end()){
                            ans[ind]--;
                            break;
                        }
                    }
                    else{
                        ans[ind]--;
                        if(mymap.find(ans) != mymap.end()){
                            ans[ind] ++;
                            break;
                        }
                    }
                }
            }
            res = max(res, (ans[0]*ans[0] + ans[1]*ans[1]));
        }
        return res;
    }
};
