class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
    if (s.length() != t.length()) return false;

    std::unordered_map<char, char> sToT;
    std::unordered_map<char, char> tToS;

    for (int i = 0; i < s.length(); ++i) {
        char sChar = s[i];
        char tChar = t[i];

        if (sToT.find(sChar) != sToT.end()) {
            if (sToT[sChar] != tChar) return false;
        } else {
            sToT[sChar] = tChar;
        }

        if (tToS.find(tChar) != tToS.end()) {
            if (tToS[tChar] != sChar) return false;
        } else {
            tToS[tChar] = sChar;
        }
    }

    return true;
}
};