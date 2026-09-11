class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int, int>mp;
        for(int i = 0; i < digits.size(); i++){
            mp[digits[i]]++;
        }
        int ans = 0;
        for(int i = 100; i <= 999; i++){
            bool isTrue = true;
            unordered_map<int, int>check = mp;
            int n = i;
            int cnt = 0;
            if(n%2 == 0){
                while(n != 0){
                int x = n%10;
                if(check[x] >= 1){
                    check[x]--;
                    cnt++;
                }
                else{
                    isTrue = false;
                    break;
                }
                n /= 10;
            }
            }
            if(cnt == 3 && isTrue)ans++;
        }
        return ans;
    }
};