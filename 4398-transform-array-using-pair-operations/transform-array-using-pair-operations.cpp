class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long int sum1 = 0, sum2 = 0;
        for(int i = 0; i < source.size(); i++) {
            sum1 += source[i];
            sum2 += target[i];
        }
        return (sum1 == sum2);
    }
};