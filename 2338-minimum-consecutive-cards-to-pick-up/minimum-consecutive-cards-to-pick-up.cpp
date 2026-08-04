class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> myMap;
        int i = 0, ans = INT_MAX;
        for(int j = 0; j < cards.size(); j++) {
            if(myMap.count(cards[j])) {
                ans = min(ans, j - myMap[cards[j]]+1);
                myMap.erase(cards[i]);
                i++;
            }
            myMap[cards[j]] = j;
        }
        return (ans == INT_MAX ? -1 : ans);
    }
};