class Solution {
public:
    int lengthOfLastWord(string s) {
    for (int i = s.length()-1; i >= 0 ; i--) {
        if (isalpha(s[i])){
            int o=0;
            while ( i >=0  && isalpha(s[i])){
                o++;
                i--;
            }
            return o;
        }
    }
    return s.length();
}
};