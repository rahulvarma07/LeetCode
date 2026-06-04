class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q1;
        queue<int> q2;
        for(int i = 0; i < tickets.size(); i++) {
            q1.push(i);
            q2.push(tickets[i]);
        }
        int ans = 0;
        while(!q1.empty() && !q2.empty()) {
            int person = q2.front();
            int personPos = q1.front();
            q2.pop();
            q1.pop();
            if(person-1 > 0) {
                q2.push(person-1);
                q1.push(personPos);
            }
            ans++;
            if(personPos == k && person-1 == 0) {
                return ans;
            }
        }
        return ans;
    }
};