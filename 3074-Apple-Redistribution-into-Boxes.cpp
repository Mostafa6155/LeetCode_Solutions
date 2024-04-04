class Solution {
public:
   
int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
    long long sum=0;
    for(auto i:apple) {
        sum+=i;
    }
    sort(capacity.begin(),capacity.end());
    int i=0;
    while(sum > 0){
        sum-=capacity.back();
        capacity.pop_back();
        i++;
    }
    return i;
}
};