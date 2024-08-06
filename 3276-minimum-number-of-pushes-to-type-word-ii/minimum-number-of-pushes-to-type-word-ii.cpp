class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int>check;
        for(auto a:word){
            check[a] += 1;
        }
        vector<pair<int, char>>myVec;
        for(auto a: check){
            pair<int, char> myPair = {a.second, a.first};
            myVec.push_back(myPair);
        }
        int ans = 0;
        int cnt = 0;
        int res;
        sort(myVec.rbegin(), myVec.rend());
        for(int i = 0; i < myVec.size(); i++){
            if(i <= 7){
                res = 1;
                ans += (myVec[i].first * res);
            }
            else if(i <= 15){
                res = 2;
                ans += (myVec[i].first * res);
            }
            else if(i <= 23){
                res = 3;
                ans += (myVec[i].first * res);
            }
            else{
                res = 4;
                ans += (myVec[i].first * res);
            }
            cout << myVec[i].first << " " << res << " |";
        }
        return ans;
    }
};