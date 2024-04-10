class Solution {
public:
    int findTheWinner(int n, int k) 
    {
        if(k == 1) return n;
        queue<int>q;
        for(int i = 1; i <= n; i++) q.push(i);
        int count = 0;
        int ans = 0;
        while(! q.empty())
        {
            count += 1;
            if(! q.empty() and count % k != 0)
            {
                q.push(q.front());
                ans = q.front();
                q.pop();
            }
            if(! q.empty() and count % k == 0)
            {
                q.pop();
            }
        }
        return ans;
    }
};