class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> v(nums.size(),0);
    v[0]=1;
    for (int i = 1; i < v.size(); ++i) {
        if (nums[i] != nums[i-1]){
            v[i]++;
        }
    }
    int i=0;
    int val=1;
    while (true){
        if (nums[i] > 0 && v[i]){
            if (nums[i] != val){
                return val;
            }
            val++;
        }
        i++;
        if (i==nums.size()){
            break;
        }
    }
    return val;
}
};