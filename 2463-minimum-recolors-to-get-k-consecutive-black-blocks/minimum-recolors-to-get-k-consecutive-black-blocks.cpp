class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int c=0,ans;
        for(int j=0;j<k;j++){
            if(blocks[j]=='B') c++;
        }
        ans=c;
        for(int j=k;j<blocks.size();j++){
            if(blocks[j]=='B' and blocks[j-k]=='W') c++;
            else if(blocks[j]=='W' and blocks[j-k]=='B') c--;
            ans=max(ans,c);
        }
        return k-ans;
    }
};