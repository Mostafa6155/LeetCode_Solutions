class Solution {
public:
    bool isPowerOfFour(int num) {
    long long n=1;
    if (n==num)
        return true;
    while (n<num){
        n*=4;
        if (num==n)
            return true;
    }
    return false;
}
};