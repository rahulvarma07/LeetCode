class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>ans;
        multiset<long long>lo, hi;

        auto balance = [&](){
            if(hi.size() > lo.size()){
                lo.insert(*hi.begin());
                hi.erase(hi.begin());
            }
            // If low size is grater than the high (since low can have a 1 diff than high)
            if(lo.size() > hi.size()+1){
                hi.insert(*lo.rbegin());
                lo.erase(prev(lo.end()));
            }
        };

        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(lo.empty() || nums[i] <= *lo.rbegin()) lo.insert(nums[i]);
            else hi.insert(nums[i]);

            // Balance
            balance();

            // Delete 
            if(i >= k){
                long long out = nums[i-k];
                auto it = lo.find(out);
                if(it != lo.end()){
                    lo.erase(it);
                }
                else{
                    it = hi.find(out);
                    if(it != hi.end()){
                        hi.erase(it);
                    }
                }
                balance();
            }

            // Push the answer
            if(i >= k-1){
                if (k % 2 == 1) ans.push_back(*lo.rbegin());
                else ans.push_back(((double)*lo.rbegin() + (double)*hi.begin()) / 2.0);
            }
        }
        return ans;
    }
};

