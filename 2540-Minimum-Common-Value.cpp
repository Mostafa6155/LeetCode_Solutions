class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    if (nums1.size() <= nums2.size()){
        for (auto i : nums1) {
            if (binary_search(nums2.begin(),nums2.end(),i)){
                return i;
            }
        }
    } else{
       return getCommon(nums2,nums1);
    }
    return -1;
}
};