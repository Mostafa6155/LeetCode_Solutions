class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
    vector<pair<int, int>> v(nums.size());
    for (int i = 0; i < v.size(); ++i) {
        v[i].first=nums[i];
        v[i].second = i ;
    }
    sort(v.begin(),v.end());
    vector<int> res(0);
    int i=0;int j=v.size()-1;
    while (i < j){
        if (v[i].first + v[j].first > target){
            j--;
        }else if(v[i].first + v[j].first < target){
            i++;
        } else{
            res.push_back(v[i].second);
            res.push_back(v[j].second);
            i++;
        }
    }
    return res;
}
};