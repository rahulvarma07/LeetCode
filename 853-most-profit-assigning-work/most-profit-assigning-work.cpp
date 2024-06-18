class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& worker) {
        unordered_map<int, int>check;
        for(int i = 0; i < d.size(); i++){
            int maxx = max(p[i], check[d[i]]);
            check[d[i]] = maxx;
        }

        sort(d.begin(), d.end());

        // for(auto a:d){
        //     cout << a << " ";
        // }
        // cout << endl;
        // for(auto a:d){
        //     cout << check[a] << " ";
        // }

        for(int i = 1; i < d.size(); i++){
            if((check[d[i]]) <= (check[d[i-1]])){
                check[d[i]] = check[d[i-1]];
            }
        }
        int ans = 0;
        for(int i = 0; i < worker.size(); i++){
            int x = 0;
            int y = d.size()-1;
            int ind = INT_MAX;
            while(x <= y){
                int mid = (x + y)/2;
                if(d[mid] <= worker[i]){
                    ind = mid;
                    x = mid+1;
                }
                else{
                    y = mid -1;
                }
            }
            if(ind < p.size()){
                ans += check[d[ind]];
            }
        }
        return ans;
    }
};