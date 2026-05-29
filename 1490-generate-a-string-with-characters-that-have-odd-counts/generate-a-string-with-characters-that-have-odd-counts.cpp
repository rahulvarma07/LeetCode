class Solution {
public:
    string generateTheString(int n) {
        string str = "";
        if(n%2 != 0) {
            for(int i = 1; i <= n; i++) str += 'a';
        }else{
            for(int i = 1; i <= n-1; i++) str += 'a';
            str += 'b';
        }
        return str;
    }
};