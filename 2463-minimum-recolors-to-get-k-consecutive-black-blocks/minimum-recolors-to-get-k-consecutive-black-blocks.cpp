class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0, j = k-1, n = blocks.size();
        int ans = INT_MAX;
        while(j < n){
            int count = 0;
            for(int a = i ; a <= j; a++){
               if(blocks[a] == 'W') count += 1; 
            }
            ans = min(ans, count);
            i += 1;
            j += 1;
        }
        return ans;
    }
};