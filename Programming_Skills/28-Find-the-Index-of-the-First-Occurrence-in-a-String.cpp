class Solution {
public:
    int strStr(string haystack, string needle) {
    for(int i=0;i<haystack.length();i++) {
        int my_index = i;
        int c=0;
        int j=0;
        while (needle[j] == haystack[my_index] && j < needle.size()) {
            c++;
            j++;
            my_index++;
        }
        if (c==needle.length()) {
            return i;
        }
    }
    return -1;
}
};