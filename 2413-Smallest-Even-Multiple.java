class Solution {
    public int gcd(int n,int m){
        if(m==0){
            return n;
        }
        return gcd(m,n%m);
    }
    public int smallestEvenMultiple(int n) {
        return (n*2)/gcd(2,n);
    }
}