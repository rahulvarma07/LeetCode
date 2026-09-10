class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<double> mySet;
        for(auto a: arr) {
            if(mySet.find(a*1.0) != mySet.end()) return true;
            mySet.insert(a/2.0);
            mySet.insert(a*2.0);
        }
        return false;
    }
};