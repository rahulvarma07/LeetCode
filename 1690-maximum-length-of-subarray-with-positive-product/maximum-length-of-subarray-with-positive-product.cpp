class Solution {
public:
    int getMaxLen(vector<int>& nums) {
       int ans = 0, cnt = 0, i = 0;
       for(int j = 0; j < nums.size(); j++){
            if(nums[j] == 0){
                if(cnt == 0 && i != j){
                    ans = max(ans, (j-i));
                    i = j+1;
                    continue;
                }
                while(cnt%2 != 0 && i < j){
                    if(nums[i] < 0) cnt--;
                    i++;
                }
                ans = max(ans, (j-i));
                i = j+1;
            }
            if(nums[j] < 0) cnt++;
            if(cnt%2 == 0){
                ans = max(ans, (j-i)+1);
            }
       }
       cout << i << " ";
       while(cnt%2 != 0 && i < nums.size()){
          if(nums[i] < 0) cnt--;
          i++;
       }
       ans = max(ans, (int)(nums.size()-i));
       return ans;
    }
};