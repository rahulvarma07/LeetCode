class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans(boxes.size(), 0);
        for(int i = 0; i < boxes.size(); i++){
            int p = 0;
            for(int x = i-1; x >= 0; x--){
                if(boxes[x] == '1') p += abs(i - x);
            }
            for(int x = i+1; x < boxes.size(); x++){
                if(boxes[x] == '1') p += abs(x - i);
            }
            ans[i] = p;
        }
        return ans;
    }
};