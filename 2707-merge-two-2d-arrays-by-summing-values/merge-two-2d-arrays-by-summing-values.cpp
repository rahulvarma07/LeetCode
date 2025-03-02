class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i = 0, j = 0;
        vector<vector<int>>ans;
        while(i < nums1.size() && j < nums2.size()){
            vector<int>p = {0,0};
            if(nums1[i][0] == nums2[j][0]){
                p[0] = nums1[i][0];
                p[1] = nums1[i][1]+nums2[j][1];
                ans.push_back(p);
                i++;
                j++;
            }
            else if(nums1[i][0] < nums2[j][0]){
                p[0] = nums1[i][0];
                p[1] = nums1[i][1];
                ans.push_back(p);
                i++;
            }
            else{
                p[0] = nums2[j][0];
                p[1] = nums2[j][1];
                ans.push_back(p);
                j++;
            }
        }
        while(j < nums2.size()){
            ans.push_back({nums2[j][0], nums2[j][1]});
            j++;
        }
        while(i < nums1.size()){
            ans.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }
        return ans;
    }
};