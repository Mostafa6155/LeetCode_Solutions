class Solution {
    public boolean is_prime(int num) {
        if (num<2){
            return false;
        }
        for (int i=2;i*i<=num;i++){
            if (num%i==0){
                return false;
            }
        }
        return true;
    }
    public int diagonalPrime(int[][] nums) {
        int max_ele=0;
        int ele=0;
        for (int i=0;i<nums.length;i++){
            for (int j=0;j<nums[0].length;j++){
                ele=nums[i][j];
                if ((i==j)||(j==nums.length-1-i)){
                    if (is_prime(ele)&&ele>max_ele){
                        max_ele=ele;
                    }
                }
            }
        }
        return max_ele;
    }
}