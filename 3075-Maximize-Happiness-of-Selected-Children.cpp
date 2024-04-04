class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
    sort(happiness.begin(),happiness.end());
    long long sum=0;
    long long num;
    for (int i = 0; i < k; i++) {
        num=happiness.back()-i;
        if (num >0){
            sum+=num;
        }
        happiness.pop_back();
    }
    return sum;
}
};