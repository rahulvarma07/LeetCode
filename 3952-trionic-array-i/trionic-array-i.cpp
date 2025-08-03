class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n == 3) return false;
        int p = 0, q = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[p]){
                p++;
            }else{
                break;
            }
        }
        if(p == n-1 || p == 0) return false;
        q = p;
        cout << p << " ";
        for(int i = q+1; i < n; i++){
            if(nums[q] > nums[i]){
                q++;
            }
            else{
                break;
            }
        }
        cout << q << " ";
        if(q == n-1) return false;
        p = q;
        for(int i = q+1; i < nums.size(); i++){
            if(nums[i] > nums[p]){
                p++;
            }else{
                break;
            }
        }
        cout << p << " ";
        if(p < n-1) return false;
        return true;
    }
};