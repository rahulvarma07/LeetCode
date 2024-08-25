class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> mypq;
        pair<int, int>check;
        for(int i = 0; i < nums.size(); i++){
            check = {nums[i], i};
            mypq.push(check);
        }
        while(k--){
            check = mypq.top();
            check.first *= multiplier;
            mypq.pop();
            mypq.push(check);
        }
        while(!mypq.empty()){
            check = mypq.top();
            nums[check.second] = check.first;
            mypq.pop();
        }
        return nums;
    }
};