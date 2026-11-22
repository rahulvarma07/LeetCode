class Solution {
public:
    int minRange(int a, int b, int c) {
        vector<int> num = {a, b, c};
        sort(num.begin(), num.end());
        if(num.back() > num[0] + num[1]) num[2] = num[0] + num[1];
        return num.back() - num.front();
    }
};