class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans(friends.size(), 0);
        int ind = 0;
        for(auto a: order){
            if(ind == friends.size()) break;
            int low = 0, high = friends.size()-1;
            int find = -1;
            while(low <= high){
                int mid = (low + high)/2;
                if(friends[mid] == a){
                    find = mid;
                    break;
                }
                else if(friends[mid] > a){
                    high = mid-1;
                }
                else low = mid+1;
            }
            if(find != -1){
                ans[ind] = friends[find];
                ind++;
            }
        }
        return ans;
    }
};