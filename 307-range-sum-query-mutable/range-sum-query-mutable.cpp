class NumArray {
public:
    vector<int>nums;
    vector<int> segments;
    int n;
    
    NumArray(vector<int>& nums) {
        this->nums = nums;
        this->n = nums.size();
        segments.resize(n*4, 0);
        construct(0, n-1, 0);
    }

    void construct(int low, int high, int ind){
        if(low == high){
            segments[ind] = nums[low];
            return;
        }
        int mid = (low + high)/2;
        construct(low, mid, ind*2+1);
        construct(mid+1, high, ind*2+2);
        segments[ind] = segments[ind*2+1]+segments[ind*2+2];
    }

    void updateHelper(int low, int high, int point, int val, int ind){
        if(point < low || point > high){
            return;
        }
        else if(low == high){
            segments[ind] = val;
            return;
        }
        int mid = (low + high)/2;
        updateHelper(low, mid, point, val, ind*2+1);
        updateHelper(mid+1, high, point, val, ind*2+2);
        segments[ind] = segments[ind*2+1]+segments[ind*2+2];
    }
    
    void update(int index, int val) {
        updateHelper(0, n-1, index, val, 0);
    }

    int sumRangeHelper(int x1, int y1, int x2, int y2, int ind){
        if(x2 > y1 || y2 < x1) return 0;
        if(x1 >= x2 && y1 <= y2) return segments[ind];
        int mid = (x1+y1)/2;
        int q1 = sumRangeHelper(x1, mid, x2, y2, ind*2+1);
        int q2 = sumRangeHelper(mid+1, y1, x2, y2, ind*2+2);
        return q1+q2;
    }

    int sumRange(int left, int right) {
        int ans = sumRangeHelper(0, n-1, left, right, 0);
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */