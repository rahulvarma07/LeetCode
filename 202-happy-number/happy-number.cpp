class Solution {
public:
    bool isHappy(int n) {
        int check = 0;

        while(n >= 9){
            check = 0;
            while(n){
                check += (n%10)*(n%10);
                n /= 10;
            }
            n = check;
        }
        return n==1 || n==7 ?1:0;
    }
};