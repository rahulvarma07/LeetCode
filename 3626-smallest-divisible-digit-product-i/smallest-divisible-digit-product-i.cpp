class Solution {
public:
    int smallestNumber(int n, int t) {
        bool istrue = true;
        while(istrue){
            int m = n;
            int prod = 1;
            while(m > 0){
                prod *= m%10;
                m /= 10;
            }
            if(prod % t == 0){
                istrue = false;
                return n;
            }
            n++;
        }
        return n;
    }
};