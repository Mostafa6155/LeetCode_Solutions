class Solution {
    public static int sum_of_nums(int start,int end){
        return ((end*(end+1))/2)-((start*(start+1))/2)+start;
    }
    public static int totalMoney(int n) {
        int loop=n/7;  //2
        int mod=n%7;   //6
        int all_sum=0;
        if (n<=7){
            return sum_of_nums(1,n);
        }
        int limit=0;
        for (int i=1;i<=loop;i++){
            all_sum+=sum_of_nums(i,i+6);
            limit=i;
        }
        all_sum+=sum_of_nums(limit+1,limit+mod);
        return all_sum;
    }
}