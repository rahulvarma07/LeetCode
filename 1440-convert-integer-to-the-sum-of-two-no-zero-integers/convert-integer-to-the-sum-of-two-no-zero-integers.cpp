class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i <= n; i++){
            int temp1 = (n-i);
            int temp2 = i;
            bool isTrue = true;
            while(temp1 > 0){
                if(temp1 % 10 == 0) isTrue = false;
                temp1 /= 10;
            }
            while(temp2 > 0){
                if(temp2 % 10 == 0) isTrue = false;
                temp2 /= 10;
            }
            if(isTrue){
                return {i, (n-i)};
            }
        }
        return {n/2, n/2};
    }
};