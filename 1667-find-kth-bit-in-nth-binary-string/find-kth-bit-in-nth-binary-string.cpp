class Solution {
public:
    char findKthBit(int n, int k) {
       string str = "0";
       for(int i = 2; i <= n; i++){
            string dummy = str;
            reverse(str.begin(), str.end());
            string x = str;
            for(int j = 0; j < x.size(); j++){
                if(x[j] == '0') x[j] = '1';
                else x[j] = '0';
            }
            dummy += '1';
            dummy += x;
            str = dummy;
       }
       return str[k-1];
    }
};