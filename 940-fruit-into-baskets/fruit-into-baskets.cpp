class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0, i = 0, j = 0;
        unordered_map<int, int> myMap;
        for(; j < fruits.size(); j++){
            myMap[fruits[j]]++;
            while(myMap.size() > 2){
                myMap[fruits[i]]--;
                if(myMap[fruits[i]] <= 0) myMap.erase(fruits[i]);
                i++;
            }
            ans = max(ans, (j - i)+1);
        }
        return ans;
    }
};