class Solution {
public:
    int minimumPushes(string word) {
        vector<int>myVec(26, 0);
        for(auto a: word){
            myVec[a - 'a'] += 1;
        }
        sort(myVec.rbegin(), myVec.rend());
        int ans = 0;
        int res;
        for(int i = 0; i < myVec.size(); i++){
            if(i <= 7){
                res = 1;
                ans += (myVec[i] * res);
            }
            else if(i <= 15){
                res = 2;
                ans += (myVec[i] * res);
            }
            else if(i <= 23){
                res = 3;
                ans += (myVec[i] * res);
            }
            else{
                res = 4;
                ans += (myVec[i] * res);
            }
        }
        return ans;
    }
};