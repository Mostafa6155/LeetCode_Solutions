class Solution {
    public static int kthFactor(int n, int k) {

        var arr=new ArrayList<Integer>(1);
         int index=-1;
         for (int i=1;i<=Math.sqrt(n);i++){
             if (n%i==0){
                 arr.add(i);
                 if (i!= Math.sqrt(n)) {
                     arr.add(n/i);
                 }
             }
         }
         if (k>arr.size()){
             return -1;
         }
        Collections.sort(arr);
         return arr.get(k-1);
    }
}