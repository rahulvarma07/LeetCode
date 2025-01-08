class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int,long long int>check;
        vector<int>BS;
        vector<int>ans(people.size(), 0);
        for(int i = 0; i < flowers.size(); i++){
            int x = flowers[i][0], y = flowers[i][1];
            check[x] += 1;
            check[y+1] -= 1;
        }
        long long int sum = 0;
        for(auto a:check){
            sum += a.second;
            check[a.first] = sum;
            BS.push_back(a.first);
        }
        for(int i = 0; i < people.size(); i++){
            int target = people[i];
            int low = 0, high = BS.size()-1;
            while(low <= high){
                int mid = (low + high)/2;
                if(BS[mid] <= target) low = mid+1;
                else high = mid-1;
            }
            if(high < 0) continue;
            ans[i] = check[BS[high]];
        }
        return ans;
    }
};