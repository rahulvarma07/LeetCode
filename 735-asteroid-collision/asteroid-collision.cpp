class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>coll;
        coll.push(asteroids[0]);
        for(int i = 1; i < asteroids.size(); i++){
           if(asteroids[i] > 0){
              coll.push(asteroids[i]);
           }
           else if(asteroids[i] < 0){
              int x = 0;
              x = 0-asteroids[i];
              bool isTrue = false;
              while(!coll.empty() && x >= coll.top() && coll.top() > 0){
                if(x == coll.top()) isTrue = true;
                coll.pop();
                if(isTrue) break;
              }
              if(isTrue) continue;
              if(!coll.empty() && coll.top() < 0){
                coll.push(asteroids[i]);
              }
              if(coll.empty() && !isTrue){
               coll.push(asteroids[i]); 
              }
           }
        }
        vector<int>ans;
        while(!coll.empty()){
            ans.push_back(coll.top());
            coll.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};