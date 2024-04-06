class Solution {
public:
    bool isPowerOfTwo(int num) {
    long long n=1;
    if (n==num)
        return true;
    while (n<num){
        n*=2;
        if (num==n)
            return true;
    }
    return false;
}
};