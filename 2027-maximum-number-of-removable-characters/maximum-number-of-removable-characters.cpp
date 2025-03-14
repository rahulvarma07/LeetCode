class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int low = 0, high = removable.size()-1;
        while(low <= high){
            string str = s;
            int mid = low+(high-low)/2;
            for(int i = 0; i <= mid; i++){
                str[removable[i]] = '1';
            }
            int i = 0, j = 0;
            bool isPossible = true;
            while(i < s.size() && j < p.size()){
                if(str[i] == p[j]){
                    j++;
                }
                i++;
            }
            if(j < p.size()) isPossible = false;
            if(isPossible){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};