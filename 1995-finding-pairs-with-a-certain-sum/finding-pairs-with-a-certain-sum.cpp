class FindSumPairs {
public:
    vector<int> nums1;
    vector<int> nums2;
    unordered_map<int, int>myMap;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        myMap = {};
        for(auto a: nums2){
            myMap[a]++;
        }
    }
    
    // not only add 
    void add(int index, int val) {
        myMap[nums2[index]]--;
        nums2[index] += val;
        myMap[nums2[index]]++;
    }
    
    int count(int tot) {
        int ans = 0;
        for(auto a: nums1){
            int toFind = tot - a;
            if(myMap.find(toFind) != myMap.end()){
                ans += myMap[toFind];
            }
        }
        return ans;
    }
};

// 1000 count -> 100*

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */