class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minnElem = nums[0], maxxElem = nums[0];
        int minnInd = 0, maxxInd = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(minnElem > nums[i]) {
                minnElem = nums[i];
                minnInd = i;
            }
            if(nums[i] > maxxElem) {
                maxxElem = nums[i];
                maxxInd = i;
            }
        }
        // -1 -4 3 4 5 5 6 7 9
        int minn = min(minnInd, maxxInd), maxx = max(minnInd, maxxInd);

        return min((int)(maxx + 1), min((int)(minn+1 + (nums.size() - maxx)), (int)(nums.size() - minn)));
    }
};