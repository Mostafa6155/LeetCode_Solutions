class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int j=nums.size()-1;
    vector<int> v;
    for (int i = 0; i < j; i++) {
        if (nums[i]==nums[i+1]){
            v.push_back(nums[i]);
            i++;
        }
    }
    return v;
}
};