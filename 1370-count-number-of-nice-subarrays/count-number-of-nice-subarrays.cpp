class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = 0;
        int n= nums.size();
        cout<<n<<" length"<<endl;
        vector<int>check(2, -1);
        int i = 0, j = 0, x = 0, co = 0, curr = 0;
        while(j < nums.size()){
            if(nums[j]%2 != 0){
                co++;
            }
            if(x == 0 && nums[j]%2 != 0){
                check[x] = j;
                x++;
            }
            while(co > k){
                cout << check[0] << " " << check[1] << endl;
                ans += ((j-check[1])*(check[0]-curr+1));
                // curr++;
                int f=0;
                while(nums[i]%2==0 or !f){
                    if(nums[i]%2){f=1;co--;}
                    i++;
                }
                cout<<ans<<" i "<<i<<endl;
                curr = check[0]+1;
                check[0] = i;
                check[1] = j;
            }
            if(co == k && nums[j]%2 != 0){
                check[1] = j;
            }
            j++;
        }
        cout << check[0] << " " << check[1]<<" "<<curr;
        if(check[0] == -1 && check[1] == -1) return 0;
        if(check[1] == -1) return 0;
        ans += ((j-check[1])*(check[0]-curr+1));
        return ans;
    }
};