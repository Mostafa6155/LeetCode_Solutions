class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    long long product=1;
    int n=0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]!=0){
            product*=nums[i];
        } else{
            n++;
        }
    }
    if (n==nums.size()){
        vector<int> result(nums.size(),0);
        return result;
    } else {
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0 ){
                if (n==0){
                    result[i]=product / nums[i];
                } else{
                    result[i]=0;
                }
            }
            else {
                if (n>1){
                    result[i]=0;
                } else {
                    result[i] = product;
                }
            }
        }
        return result;
    }
}
};