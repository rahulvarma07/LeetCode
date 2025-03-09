class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        vector<int>data(n+k-1, 0);
        for(int i = 0; i < data.size(); i++){
            data[i] = colors[i%n];
        }
        vector<int>checks(n+k-1, 0);
        for(int i = 0; i < checks.size(); i++){
            if(i == 0){
                if(data[i] != data[i+1]) checks[i] = 1;
                else checks[i] = 0;
            }
            else if(i == data.size()-1){
                if(data[i] != data[i-1]) checks[i] = 1;
                else checks[i] = 0;
            }
            else{
                if(data[i] != data[i+1] && data[i] != data[i-1]) checks[i] = 1;
                else checks[i] = 0;
            }
        }
        int i = 0, j = 0;
        int cnt = 0;
        for(;j < k; j++){
            if(checks[j])cnt++;
        }
        j--;
        int ans = 0;
        while(j < checks.size()){
            if(cnt == k) ans++;
            else if(cnt < k){
                int vc = 0;
                if(j < checks.size() && checks[i] == 0 && data[i] != data[i+1]) vc++;
                if(j < checks.size() && checks[j] == 0 && data[j] != data[j-1]) vc++;
                if(cnt+vc == k) ans++;
            }
            cnt -= checks[i];
            j++;
            if(j < checks.size())cnt += checks[j];
            i++;
        }
        return ans;
    }
};