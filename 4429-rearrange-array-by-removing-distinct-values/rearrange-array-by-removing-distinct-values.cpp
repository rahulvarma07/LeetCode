class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> myMap(101, 0);
        for(auto a: nums) myMap[a]++;
        vector<int> ans;
        bool isTrue = true;
        while(isTrue) {
            bool flag = false;
            for(int i = 1; i <= 100; i++) {
                if(myMap[i] != 0) {
                    ans.push_back(i);
                    myMap[i]--;
                    flag = true;
                }
            }
            isTrue = flag;
        }
        return ans;
    }
};