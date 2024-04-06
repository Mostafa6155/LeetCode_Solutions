class Solution {
        public int gcd1(int n,int m){
        if (m==0){
            return n;
        }
        return gcd1(m,n%m);
    }
    public int countBeautifulPairs(int[] nums) {
        int c=0;
        for (int i=0;i<nums.length;i++){
            for (int j=i+1;j<nums.length;j++){
                String num=String.valueOf(nums[i]);
                int n=nums[i]/((int)Math.pow(10,num.length()-1));
                int m=nums[j]%10;
                if (gcd1(n,m)==1){
                    c++;
                }
            }
        }
        return c;
    }
}