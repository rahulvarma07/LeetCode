class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int , int>ans;
        int n = A.size();
        vector<int>res;
        for(int i = 0; i < n; i++){
            ans[A[i]] = i;
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            count = 0;
            for(int j = 0; j <= i; j++){
                if(ans.find(B[j]) != ans.end()){
                    if(ans[B[j]] <= i){
                        count += 1;
                    }
                }
            }
            res.push_back(count);
        }
        return res;
    }
};