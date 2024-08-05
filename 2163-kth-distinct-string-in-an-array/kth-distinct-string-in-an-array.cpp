class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>check;
        for(auto a : arr){
            check[a] += 1;
        }
        for(int i = 0; i < arr.size(); i++){
            if(check[arr[i]] == 1){
                k -= 1;
            }
            if(k <= 0) return arr[i];
        }
        return "";
    }
};