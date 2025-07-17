class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int maxx = -1;
        int oddCnt = 0, evenCnt = 0, altEO = 0, altOE = 0;
        bool altE = true, altO = true;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(x%2 == 0){
                evenCnt++;
                if(altE){
                    altEO++;
                    altE = false;
                }
                if(!altO){
                    altOE++;
                    altO = true;
                }
            }
            else{
                oddCnt++;
                if(!altE){
                    altEO++;
                    altE = true;
                }
                if(altO){
                    altOE++;
                    altO = false;
                }
            }
        }
        cout << altO;
        return max({oddCnt, evenCnt, altEO, altOE});
    }
};