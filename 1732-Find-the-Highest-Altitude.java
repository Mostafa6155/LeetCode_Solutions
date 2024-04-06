class Solution {
     public static int largestAltitude(int[] gain) {
        for (int i = 1; i < gain.length; i++) {
            gain[i] = gain[i] + gain[i - 1];
        }
        if ( Arrays.stream(gain).max().orElse(0)<0){
            return 0;
        }
        return Arrays.stream(gain).max().orElse(0);
    }
    
}