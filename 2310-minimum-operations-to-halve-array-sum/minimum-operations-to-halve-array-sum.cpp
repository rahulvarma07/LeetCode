class Solution {
public:
    int halveArray(vector<int>& nums) {
        int ans = 0;
        double sum = 0;
        priority_queue<double>pq;
        for(auto a:nums){
            sum += a;
            pq.push(a);
        }
        double des = (sum/2);
        while(sum > des){
            double x = pq.top()/2;
            sum -= x;
            ans++;
            pq.pop();
            pq.push(x);
        }
        return ans;
    }
};