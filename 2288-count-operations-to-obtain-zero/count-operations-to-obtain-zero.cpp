class Solution {
public:
    int minOperations(int n1, int n2, int ans){
        if(n1 == 0 || n2 == 0){
            return ans;
        }
        if(n1 >= n2){
            return minOperations(n1-n2, n2, ++ans);
        }else{
            return minOperations(n1, n2-n1, ++ans);
        }
    }
    int countOperations(int num1, int num2) {
        int ans = minOperations(num1, num2, 0);
        return ans;
    }
};