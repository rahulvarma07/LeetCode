class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string str;
        for(int i = 1; i <= num; i++) str += '9';
        int currSum = 9*num, i = num-1;
        while(i >= 0 && currSum > sum) {
            currSum--;
            str[i] = str[i]-1;
            if(str[i] == '0') i--;
        }
        return ((currSum == sum) ? str : "");
    }
};