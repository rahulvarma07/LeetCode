class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) 
    {
        // priority_queue<int>ans;
        // for(auto a:happiness)
        // {
        //     ans.push(a);
        // }
        // int sub = 0;
        // long long sum = 0;
        // while(k > 0)
        // {
        //     sum += ans.top() - sub;
        //     ans.pop();
        //     sub += -1;
        //     k -= 1;
        // }
        // return sum;
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