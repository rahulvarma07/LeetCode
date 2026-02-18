class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        map<int, bool> myMap;
        for(auto a: bulbs){
            myMap[a] = !myMap[a];
        }
        for(auto a: myMap){
            if(a.second){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};