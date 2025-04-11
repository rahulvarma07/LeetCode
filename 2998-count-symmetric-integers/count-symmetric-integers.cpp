class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++){
            int n = i;
            int dig = i;
            int cnt = 0;
            while(n){
                cnt++;
                n /= 10;
            }

            // 
            if(cnt%2 == 0){
                string str = to_string(dig);
                int x = 0, y = str.size()-1;
                int sum1 = 0, sum2 = 0;
                while(x < y){
                    sum1 += (str[x]-'0');
                    sum2 += (str[y]-'0');
                    x++;
                    y--;
                }
                if(sum1 == sum2)ans++;
            }
        }
        return ans;
    }
};