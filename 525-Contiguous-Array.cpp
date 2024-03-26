class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        int max_length = 0;
        int sum = 0;
        std::unordered_map<int, int> sum_index; 
        sum_index[0] = -1; 
        
        for (int i = 0; i < nums.size(); ++i) {
            sum += (nums[i] == 0 ? -1 : 1);
            if (sum_index.find(sum) != sum_index.end()) {
                max_length = std::max(max_length, i - sum_index[sum]);
            } else {
                sum_index[sum] = i;
            }
        }
    
        return max_length;
    }
};