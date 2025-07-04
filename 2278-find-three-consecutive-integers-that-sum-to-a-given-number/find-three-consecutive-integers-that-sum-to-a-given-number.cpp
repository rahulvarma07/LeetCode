class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;
        long long int x = (num - 3) / 3;
        long long int sum = x+x+x+3;
        if(sum == num){
            ans.push_back(x);
            ans.push_back(x+1);
            ans.push_back(x+2);
        }
        return ans;
    }
};