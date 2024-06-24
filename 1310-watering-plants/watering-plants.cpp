class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        int ans = 0;
        int d = c;
        for(int i = 0; i < p.size(); i++){
            if(c >= p[i]){
                c -= p[i];
                ans += 1;
               // cout << i << "*" << " ";
            }
            else if(c < p[i]){
                c = d;
                ans += i+1;
                ans += i;
                c = d-p[i];
                //cout << i << "-" << " ";
            }
           // cout << c << " ";
        }
        // 3 1 
        return ans;
    }
};