class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();

    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] <= 0) {
            swap(nums[i], nums[j]);
            ++j;
        }
    }
    for (int i = j; i < n; ++i) {
        int num = abs(nums[i]);
        if (num <= n - j) {
            nums[num + j - 1] = -abs(nums[num + j - 1]);
        }
    }
    for (int i = j; i < n; ++i) {
        if (nums[i] > 0) {
            return i - j + 1;
        }
    }

    return n - j + 1;
}

};