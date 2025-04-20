class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans = 0;
        unordered_map<int, int>rab;
        for(auto a:answers) rab[a]++;
        for(auto a:rab){
            int req = a.first+1;
            int cnt = a.second;
            //cout << req << " ";
            while(cnt > 0){
                //cout << cnt << " ";
                ans += req;
                cnt -= req;
            }
            cout << endl;
        }
        return ans;
    }
};