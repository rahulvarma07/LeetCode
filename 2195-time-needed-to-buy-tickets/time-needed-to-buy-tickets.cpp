class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }
        int ans = 0;
        while(tickets[k] > 0) {
            int person = q.front();
            tickets[person] -= 1;
            if(tickets[person] > 0) {
                q.push(person);
            }
            q.pop();
            ans++;
        }
        return ans;
    }
};