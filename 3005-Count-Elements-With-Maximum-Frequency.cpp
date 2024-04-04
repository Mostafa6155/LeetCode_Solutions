class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    vector<long long> arr(101,0);
    for (long long num : nums) {
        arr[num]++;
    }
    long long index=*max_element(arr.begin(),arr.end());
    int c=0;
    for (long long i : arr) {
        if (index==i){
            c+=i;
        }
    }
    return c;
}
};