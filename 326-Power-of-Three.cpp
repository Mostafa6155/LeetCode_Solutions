class Solution {
public:
    bool isPowerOfThree(int num) {
    long long n=1;
    if (n==num)
        return true;
    while (n<num){
        n*=3;
        if (num==n)
            return true;
    }
    return false;
}
};