class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
    return atMostK(nums, k) - atMostK(nums, k - 1);
}

int atMostK(vector<int>& nums, int k) {
    int count = 0;
    unordered_map<int, int> freq;
    for (int i = 0, j = 0; j < nums.size(); ++j) {
        if (!freq[nums[j]]++) k--;
        while (k < 0) {
            if (!--freq[nums[i]]) k++;
            i++;
        }
        count += j - i + 1;
    }
    return count;
}

};