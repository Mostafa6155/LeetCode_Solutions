class Solution {
    public static int maximumStrongPairXor(int[] nums) {
        int[] max_pair=new int[nums.length*nums.length+2000990];
        int index=0;
        for (int i=0;i<nums.length;i++){
            for (int j=0;j<nums.length;j++){
                if (Math.abs(nums[i]-nums[j])<=Math.min(nums[i],nums[j])){
                    max_pair[index]=nums[i];
                    max_pair[index+1]=nums[j];
                    index+=2;

                }
            }
        }
        int max_xor=(int)max_pair[0]^max_pair[1];
        for (int i=0;i<max_pair.length-1;i+=2){
            int current=(int)max_pair[i]^max_pair[i+1];
            if (max_xor<current){
                max_xor=((int)max_pair[i]^max_pair[i+1]);
            }
        }
        return (int)max_xor;
    }
}