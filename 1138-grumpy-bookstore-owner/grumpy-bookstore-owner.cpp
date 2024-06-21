class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int n = c.size();
        int summ = c[0];
        vector<int>pref(c.size(), 0);
        vector<int>suff(c.size(), 0);
        if(g[0] == 0){
            pref[0] = c[0];
        }
        if(g[n-1] == 0){
            suff[n-1] = c[n-1];
        }

        for(int i = 1; i < c.size(); i++){
            if(g[i] == 0){
                pref[i] = pref[i-1]+c[i];
            }
            else{
                pref[i] = pref[i-1];
            }
            summ += c[i];
        }

        for(int i = n-2; i >= 0; i--){
            if(g[i] == 0){
                suff[i] = suff[i+1]+c[i];
            }
            else{
                suff[i] = suff[i+1];
            }
        }


        if(g.size() == m) return summ;
        int maxx = INT_MIN;
        int sum = 0;

        // Base Case 1
        for(int i = 0; i < m; i++){
            //cout << i << " ";
            sum += c[i];
        }
        sum += suff[m];
        maxx = max(maxx, sum);
        sum = 0;
        //Base Case-2;
        for(int i = n-1; i >= n-m; i--){
            //cout << i << " ";
            sum += c[i];
        }
        sum += pref[n-m-1];
        cout << endl;
        maxx = max(maxx, sum);


        // Sliding Window..
        sum = 0;
        int left = 1, right = 1;

        while(right < n-1){
            sum += c[right];
            //cout << sum << " ";
            if(((right - left)+1) >= m){
                int a = sum + pref[left-1]+suff[right+1];
                cout << a << " ";
                maxx = max(maxx, a);
                sum -= c[left];
                left += 1;
            }
            //cout << right << " ";
            right ++;
        }

        return maxx;
    }
};