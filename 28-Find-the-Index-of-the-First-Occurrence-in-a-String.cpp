class Solution {
public:
    int strStr(const std::string& haystack, const std::string& needle) {
    size_t found = haystack.find(needle);
    if (found != std::string::npos) {
        return static_cast<int>(found);
    } else {
        return -1;
    }
}
};