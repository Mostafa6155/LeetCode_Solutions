class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int j=nums.size()-1;
    for (int i = 0; i < nums.size()-1; i++,j--) {
        if (nums[i]==nums[i+1]){
            return nums[i];
        }
        if (nums[j]==nums[j-1]){
            return nums[j];
        }
    }
    return -1;
}

};