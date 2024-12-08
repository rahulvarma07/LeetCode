class Solution {
public:
    int noOfSteps(int n, int ans){
        if(n == 0){
            return ans;
        }
        if(n%2 == 0){
            return noOfSteps(n/2, ++ans);
        }
        else{
            return noOfSteps(n-1, ++ans);
        }
    }
    int numberOfSteps(int num) {
        int ans = noOfSteps(num, 0);
        return ans;
    }
};