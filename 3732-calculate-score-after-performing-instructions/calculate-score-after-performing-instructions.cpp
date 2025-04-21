class Solution {
public:
    long long calculateScore(vector<string>& ins, vector<int>& val) {
        long long int ans = 0;
        int i = 0;
        while(i < ins.size()){
            if(ins[i] == "add"){
                ans += val[i];
                ins[i] = "vis";
                //cout << i << " ";
                i++;
            }
            else if(ins[i] == "jump"){
                ins[i] = "vis";
                i += val[i];
                // cout << i << " ";
                if(i < 0 || i > ins.size() || ins[i] == "vis") return ans;
            }
            else return ans;
        }
        // -1 13 
        return ans;
    }
};