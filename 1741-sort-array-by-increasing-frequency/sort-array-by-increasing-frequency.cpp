class comp{
public:
    bool operator()(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second){
            return (a.first >= b.first);
        }
        return a.second <= b.second;
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int>check;
        for(auto a:nums) check[a]++;
        vector<pair<int, int>>p;
        for(auto a:check){
            p.push_back({a.first, a.second});
        }
        sort(p.begin(), p.end(), comp());
        vector<int>ans;
        for(int i = 0; i < p.size(); i++){
            for(int j = 0; j < p[i].second; j++){
                ans.push_back(p[i].first);
            }
        }
        return ans;
    }
};