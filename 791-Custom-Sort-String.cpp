class Solution {
public:
    string customSortString(string order, string s) {
    vector<int> arr1(26,0);
    for (int i = 0; i < s.length() ; i++) {
        arr1[int(s[i])-97]++;
    }
    string copy1;
    for (int i = 0; i < order.length(); i++) {
        while (arr1[int(order[i])-97]){
            copy1+=order[i];
            arr1[int(order[i])-97]--;
        }
    }
    for (int i = 0; i < 26; ++i) {
        while (arr1[i]){
            copy1+=char(i+97);
            arr1[i]--;
        }
    }
    return copy1;
}
};