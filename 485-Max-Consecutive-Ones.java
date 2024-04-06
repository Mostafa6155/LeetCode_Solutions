import java.util.Arrays;
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int [] arr=new int[1000000];
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                count++;
                if(i==nums.length-1){
                    arr[i]=count;
                }
            }
            else{
                arr[i]=count;
                count=0;
            }
        }
        return Arrays.stream(arr).max().getAsInt();

    }
}