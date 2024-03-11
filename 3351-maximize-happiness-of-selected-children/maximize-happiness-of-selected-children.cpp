class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) 
    {
        sort(happiness.begin(),happiness.end());
        int n = -1;
        for(int i = happiness.size()-2; i >= 0 ; i --)
        {
            happiness[i] += n;
            n += -1;
        }
        int i = -1;
        long long sum = 0;
        while(k > 0)
        {
            if(happiness[happiness.size()+i] < 0) happiness[happiness.size()+i] = 0; 
            sum += happiness[happiness.size() + i];
            k -= 1;
            i += -1;
        }
        return sum;
    }
};