class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int n = digits.size();
        int carry = 1;
        for(int i = n-1; i >= 0; i--) {
            int x = digits[i];
            x += carry;
            if(x == 10) {
                ans.push_back(0);
                carry = 1;
            }else{
                ans.push_back(x);
                carry = 0;
            }
        }
        if(carry == 1){
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};