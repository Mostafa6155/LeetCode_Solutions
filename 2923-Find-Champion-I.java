class Solution {
     public static int findChampion(int[][] grid) {
        int max=0,win=-1;
         for (int i=0;i<grid.length;i++){
             int c=0;
             for (int j=0;j< grid[i].length;j++){
                 if (i!=j&&grid[i][j]==1){
                     c++;
                 }
             }
             if (c>max){
                 max=c;
                 win=i;
             }
         }
             return win;
    }
}