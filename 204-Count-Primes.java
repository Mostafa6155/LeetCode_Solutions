class Solution {
    public static int countPrimes(int n) {
        int c = 0;
        boolean[] composet = new boolean[n];
        if (n<2){
            return 0;
        }
        composet[0] = composet[1] = true;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (!composet[i]) {
                for (int j = i * i; j < n; j += i) {
                    composet[j] = true;
                }
            }
        }
        for (int i = 2; i < composet.length; i++) {
            if (!composet[i]) {
                c++;
            }
        }
        return c;
    }
}