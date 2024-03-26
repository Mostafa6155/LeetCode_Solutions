class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c=0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]==goal){
                c++;
            }
            long long sum=nums[i];
            for (int j = i+1; j < nums.size(); ++j) {
                sum+=nums[j];
                if (sum==goal){
                    c++;
                }
                if (sum > goal){
                    break;
                }
            }
        }
        return c;
    }
};