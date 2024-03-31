class Solution {
public:
    typedef long long ll;

ll countSubarrays(vector<int>& nums, int minK, int maxK) {
    ll count = 0;
    int lastMin = -1, lastMax = -1;
    int left = 0, right = 0;
    int n = nums.size();

    while (right < n) {
        if (nums[right] < minK || nums[right] > maxK) {
            
            left = right + 1;
        }
        if (nums[right] == minK) {
          
            lastMin = right;
        }
        if (nums[right] == maxK) {
         
            lastMax = right;
        }
       
        if (lastMin != -1 && lastMax != -1) {
            count += max(0, min(lastMin, lastMax) - left + 1);
        }
        right++;
    }

    return count;
}
};