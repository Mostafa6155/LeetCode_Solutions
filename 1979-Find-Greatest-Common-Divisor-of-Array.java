class Solution {
    public int gcd(int m,int n){
        if(n==0){
            return m;
        }
        return gcd(n,m%n);
    }
    public int findGCD(int[] nums) {
        int max=  Arrays.stream(nums).max().orElse(0);
        int min=  Arrays.stream(nums).min().orElse(0);
        return gcd(max,min);
    }
}