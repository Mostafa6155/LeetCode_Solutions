class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k <= 1) return 0;
    int c = 0;
    int last = 0;
    long long p = 1;
    for (int right = 0; right < nums.size(); ++right) {
        p *= nums[right];
        while (p >= k) {
            p /= nums[last];
            last++;
        }
        c += right - last + 1;
    }
    return c;
}

};