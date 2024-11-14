class Solution {
public:
    bool isBalanced(string num) {
        int o = 0, e = 0;
        for(int i = 0; i < num.size(); i++){
            if(i%2 == 0){
                e += (num[i]-'0');
            }
            else{
                o += (num[i]-'0');
            }
        }
        if(o == e) return true;
        return false;
    }
};