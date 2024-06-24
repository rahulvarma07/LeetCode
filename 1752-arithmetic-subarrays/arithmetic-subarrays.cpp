class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& n, vector<int>& l, vector<int>& r) {
    vector<bool>ans(l.size(), false);
    vector<int>nums = n;
    int a = 0;
    while(a < l.size()){
        bool p = true;
        sort(n.begin()+l[a], n.begin()+r[a]+1);
        int x = n[l[a]+1] - n[l[a]];
        for(int i = l[a]; i < r[a]; i++){
           if(n[i+1] - n[i] != x){
            p = false;
            break;
           }
        }
        ans[a] = p;
        a += 1;
        n = nums;
    }
    return ans;
    }
};