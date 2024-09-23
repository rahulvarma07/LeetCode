class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int x = arr[0];
        int inc = 0, dec = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > x && dec == 0){
                x = arr[i];
                inc = 1;
            }
            else if(arr[i] < x && inc == 1){
                x = arr[i];
                dec = 1;
            }
            else{
                return false;
            }
        }
        if(inc == 0 || dec == 0) return false;
        return true;
    }
};